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
        local.utility2.assetsDict['/'] =
            local.utility2.assetsDict['/test/test.html'] = local['/'];
        local.utility2.assetsDict['/assets/fann.js'] = local['/assets/fann.js'];
        local.utility2.assetsDict['/test/test.js'] =
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
        // init error-middleware
        local.middlewareError = local.utility2.middlewareError;
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
        // init example.js
        if (local.modeJs === 'node') {
            require('fs').writeFileSync(
                './example.js',
                require('fs').readFileSync('./README.md', 'utf8')
                    // support syntax-highlighting
                    .replace((/[\S\s]+?\n.*?example.js\s*?```\w*?\n/), function (match0) {
                        // preserve lineno
                        return match0.replace((/.+/g), '');
                    })
                    .replace((/\n```[\S\s]+/), '')
            );
            // init example.js
            local = require('./example.js');
        }
        // init global
        local.global = local.modeJs === 'browser'
            ? window
            : global;
        // init utility2
        local.utility2 = local.modeJs === 'browser'
            ? window.utility2
            : require('utility2');
        // init onReady
        local.utility2.onReadyInit();
        // init fann-lite
        local.fann = local.modeJs === 'browser'
            ? window.fann
            : require('./fann.js');
        // export local
        local.global.local = local;
    }());
    return local;
}())));
