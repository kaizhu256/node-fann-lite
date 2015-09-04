/*jslint
    bitwise: true,
    browser: true,
    maxerr: 8,
    maxlen: 96,
    node: true,
    nomen: true,
    regexp: true,
    stupid: true
*/
(function (local) {
    'use strict';
    switch (local.modeJs) {



    // run browser js-env code
    case 'browser':
        // export fann
        local.global.fann = local.fann;
        break;



    // run node js-env code
    case 'node':
        // init assets
        local.utility2.cacheDict.assets['/'] =
            local.utility2.cacheDict.assets['/test/test.html'] =
            local.utility2.stringFormat(local.fs
                .readFileSync(__dirname + '/README.md', 'utf8')
                // extract html
                .replace((/[\S\s]+?(<!DOCTYPE html>[\S\s]+?<\/html>)[\S\s]+/), '$1')
                // parse '\' line-continuation
                .replace((/\\\n/g), '')
                // remove "\\n' +" and "'"
                .replace((/\\n' \+(\s*?)'/g), '$1'), { envDict: local.utility2.envDict }, '');
        local.utility2.cacheDict.assets['/assets/fann-lite.js'] =
            local.utility2.istanbul_lite.instrumentInPackage(
                local.fann['/assets/fann-lite.js'],
                __dirname + '/fann.js',
                'fann-lite'
            );
        local.utility2.cacheDict.assets['/test/test.js'] =
            local.utility2.istanbul_lite.instrumentInPackage(
                local.fs.readFileSync(__filename, 'utf8'),
                __filename,
                'fann-lite'
            );
        // init middleware
        local.middleware = local.utility2.middlewareGroupCreate([
            local.utility2.middlewareInit,
            local.utility2.middlewareAssetsCached
        ]);
        // init middleware error-handler
        local.onMiddlewareError = local.utility2.onMiddlewareError;
        // run server-test
        local.utility2.testRunServer(local);
        // jslint dir
        [
            __dirname
        ].forEach(function (dir) {
            local.fs.readdirSync(dir).forEach(function (file) {
                file = dir + '/' + file;
                // if the file is modified, then restart the process
                local.utility2.onFileModifiedRestart(file);
                switch (local.path.extname(file)) {
                case '.js':
                case '.json':
                    // jslint file
                    local.utility2.jslint_lite
                        .jslintAndPrint(local.fs.readFileSync(file, 'utf8'), file);
                    break;
                }
            });
        });
        // init repl debugger
        local.utility2.replStart();

        //!! // test
        //!! local.ann = local.fann.create_standard(3, 2, 3, 1);
        //!! local.data = local.fann
            //!! .create_train_from_array(4, 2, 1, [-1, -1, -1, -1, 1, 1, 1, -1, 1, 1, 1, -1]);
        //!! //!! local.fann.randomize_weights(local.ann, 0, 0.1);
        //!! local.fann
            //!! .set_activation_function_hidden(local.ann, local.fann.ACTIVATION_SIGMOID_SYMMETRIC);
        //!! local.fann.set_activation_function_output(local.ann, 5);
        //!! local.fann.train_on_data(local.ann, local.data, 5000, 1000, 0.001);
        //!! debugPrint(local.fann.run(local.ann, [1, 1]));
        //!! debugPrint(local.fann.run(local.ann, [1, -1]));
        //!! debugPrint(local.fann.run(local.ann, [-1, 1]));

        break;
    }
}((function () {
    'use strict';
    var local;



    // run shared js-env code
    (function () {
        // init local
        local = {};
        local.modeJs = (function () {
            try {
                return module.exports &&
                    typeof process.versions.node === 'string' &&
                    typeof require('http').createServer === 'function' &&
                    'node';
            } catch (errorCaughtNode) {
                return typeof navigator.userAgent === 'string' &&
                    typeof document.querySelector('body') === 'object' &&
                    'browser';
            }
        }());
        // init global
        local.global = local.modeJs === 'browser'
            ? window
            : global;
        // export local
        local.global.local = local;
        // init utility2
        local.utility2 = local.modeJs === 'browser'
            ? window.utility2
            : require('utility2');
        // init onReady
        local.utility2.onReadyInit();
        // init fann
        local.fann = local.modeJs === 'browser'
            ? window.fann
            : require('./fann.js');
        // import fann.local
        Object.keys(local.fann.local).forEach(function (key) {
            local[key] = local[key] || local.fann.local[key];
        });
    }());
    return local;
}())));
