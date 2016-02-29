fann-lite
=========
pure javascript version of [fann](http://leenissen.dk/fann/) (fast artificial neural net library) with zero npm-dependencies (compiled from emscripten)

[![NPM](https://img.shields.io/npm/v/fann-lite.svg?style=flat-square)](https://www.npmjs.org/package/fann-lite) [![NPM](https://img.shields.io/npm/dm/fann-lite.svg?style=flat-square)](https://www.npmjs.org/package/fann-lite)



# documentation (original c-api)
[http://leenissen.dk/fann/html/files2/gettingstarted-txt.html](http://leenissen.dk/fann/html/files2/gettingstarted-txt.html)
- currently only tested to work in chrome browser



# live test-server
[![heroku.com test-server](https://kaizhu256.github.io/node-fann-lite/build/screen-capture.herokuDeploy.slimerjs..png)](https://hrku01-fann-lite-beta.herokuapp.com)



# build-status [![travis-ci.org build-status](https://api.travis-ci.org/kaizhu256/node-fann-lite.svg)](https://travis-ci.org/kaizhu256/node-fann-lite)
[![build commit status](https://kaizhu256.github.io/node-fann-lite/build/build.badge.svg)](https://travis-ci.org/kaizhu256/node-fann-lite)

| git-branch : | [master](https://github.com/kaizhu256/node-fann-lite/tree/master) | [beta](https://github.com/kaizhu256/node-fann-lite/tree/beta) | [alpha](https://github.com/kaizhu256/node-fann-lite/tree/alpha)|
|--:|:--|:--|:--|
| test-server : | [![heroku.com test-server](https://kaizhu256.github.io/node-fann-lite/heroku-logo.75x25.png)](https://hrku01-fann-lite-master.herokuapp.com) | [![heroku.com test-server](https://kaizhu256.github.io/node-fann-lite/heroku-logo.75x25.png)](https://hrku01-fann-lite-beta.herokuapp.com) | [![heroku.com test-server](https://kaizhu256.github.io/node-fann-lite/heroku-logo.75x25.png)](https://hrku01-fann-lite-alpha.herokuapp.com)|
| coverage : | [![istanbul-lite coverage](https://kaizhu256.github.io/node-fann-lite/build..master..travis-ci.org/coverage.badge.svg)](https://kaizhu256.github.io/node-fann-lite/build..master..travis-ci.org/coverage.html/index.html) | [![istanbul-lite coverage](https://kaizhu256.github.io/node-fann-lite/build..beta..travis-ci.org/coverage.badge.svg)](https://kaizhu256.github.io/node-fann-lite/build..beta..travis-ci.org/coverage.html/index.html) | [![istanbul-lite coverage](https://kaizhu256.github.io/node-fann-lite/build..alpha..travis-ci.org/coverage.badge.svg)](https://kaizhu256.github.io/node-fann-lite/build..alpha..travis-ci.org/coverage.html/index.html)|
| build-artifacts : | [![build-artifacts](https://kaizhu256.github.io/node-fann-lite/glyphicons_144_folder_open.png)](https://github.com/kaizhu256/node-fann-lite/tree/gh-pages/build..master..travis-ci.org) | [![build-artifacts](https://kaizhu256.github.io/node-fann-lite/glyphicons_144_folder_open.png)](https://github.com/kaizhu256/node-fann-lite/tree/gh-pages/build..beta..travis-ci.org) | [![build-artifacts](https://kaizhu256.github.io/node-fann-lite/glyphicons_144_folder_open.png)](https://github.com/kaizhu256/node-fann-lite/tree/gh-pages/build..alpha..travis-ci.org)|

#### master branch
- stable branch
- HEAD should be tagged, npm-published package

#### beta branch
- semi-stable branch
- HEAD should be latest, npm-published package

#### alpha branch
- unstable branch
- HEAD is arbitrary
- commit history may be rewritten



# quickstart web example
#### to run this example, follow the instruction in the script below
- example.js

```javascript
/*
example.js

this node script will serve a web-page with an interactive neural net

instruction
    1. save this script as example.js
    2. run the shell command:
          $ npm install fann-lite && node example.js
    3. open a browser to http://localhost:1337
    4. edit or paste script in browser to interact with the neural net
*/

/*jslint
    browser: true,
    maxerr: 8,
    maxlen: 96,
    node: true,
    nomen: true,
    stupid: true
*/

(function (local) {
    'use strict';
    // run node js-env code
    (function () {
        // require modules
        local.fs = require('fs');
        local.http = require('http');
        local.path = require('path');
        local.url = require('url');
        // init assets
        local['/'] = (String() +



/* jslint-ignore-begin */
'<!doctype html>\n' +
'<html>\n' +
'<head>\n' +
    '<meta charset="UTF-8">\n' +
    '<title>\n' +
    'fann-lite [2015.6.1-a]\n' +
    '</title>\n' +
    '<link rel="stylesheet" href="/assets/utility2.css">\n' +
    '<style>\n' +
    '* {\n' +
        'box-sizing: border-box;\n' +
    '}\n' +
    'body {\n' +
        'background-color: #fff;\n' +
        'font-family: Helvetical Neue, Helvetica, Arial, sans-serif;\n' +
    '}\n' +
    'body > div {\n' +
        'margin-top: 20px;\n' +
    '}\n' +
    'textarea {\n' +
        'font-family: monospace;\n' +
        'height: 32em;\n' +
        'width: 100%;\n' +
    '}\n' +
    '.csslintOutputPre {\n' +
        'color: #f00;\n' +
    '}\n' +
    '.fannOutputPre {\n' +
        'color: #f00;\n' +
    '}\n' +
    '.testReportDiv {\n' +
        'display: none;\n' +
    '}\n' +
    '</style>\n' +

'</head>\n' +
'<body>\n' +
    '<div class="ajaxProgressDiv" style="display: none;">\n' +
    '<div class="ajaxProgressBarDiv ajaxProgressBarDivLoading" >loading</div>\n' +
    '</div>\n' +
    '<h1 >fann-lite [2015.6.1-a]</h1>\n' +
    '<h3>pure javascript version of fann (fast artificial neural net library) with zero npm-dependencies (compiled from emscripten)</h3>\n' +
    '<div>edit or paste script below to\n' +
    '<a href="http://leenissen.dk/fann/html/files2/gettingstarted-txt.html" target="_blank">\n' +
    'eval</a>\n' +
    '</div>\n' +
'<textarea class="fannInputTextarea">\n' +
'// test\n' +
'local.ann = local.fann.create_standard(3, 2, 3, 1);\n' +
'local.data = local.fann\n' +
    '.create_train_from_array(4, 2, 1, [-1, -1, -1, -1, 1, 1, 1, -1, 1, 1, 1, -1]);\n' +
'local.fann\n' +
    '.set_activation_function_hidden(local.ann, local.fann.ACTIVATION_SIGMOID_SYMMETRIC);\n' +
'local.fann.set_activation_function_output(local.ann, 5);\n' +
'local.fann.train_on_data(local.ann, local.data, 5000, 1000, 0.001);\n' +
'console.log("1 xor 1 -> " + local.fann.run(local.ann, [1, 1]));\n' +
'console.log("1 xor 0 -> " + local.fann.run(local.ann, [1, -1]));\n' +
'console.log("0 xor 1 -> " + local.fann.run(local.ann, [-1, 1]));\n' +
'</textarea>\n' +
    '<pre class="fannOutputPre"></pre>\n' +
    '<div class="testReportDiv"></div>\n' +
    '<script src="/assets/fann.js"></script>\n' +
    '<script src="/assets/utility2.js"></script>\n' +
    '<script>\n' +
    'window.utility2 = window.utility2 || {};\n' +
    'window.utility2.envDict = {\n' +
        'npm_package_description: "pure javascript version of fann (fast artificial neural net library) with zero npm-dependencies (compiled from emscripten)",\n' +
        'npm_package_name: "fann-lite",\n' +
        'npm_package_version: "2015.6.1-a"\n' +
    '};\n' +
    'document.querySelector(\n' +
        '".fannInputTextarea"\n' +
    ').addEventListener("keyup", window.fann.fannInputTextarea);\n' +
    'window.fann.fannInputTextarea();\n' +
    '</script>\n' +
    '<script src="/test/test.js"></script>\n' +

'</body>\n' +
'</html>\n' +
/* jslint-ignore-end */



        String()).replace((/\{\{envDict\.\w+?\}\}/g), function (match0) {
            switch (match0) {
            case '{{envDict.npm_package_description}}':
                return 'this is an example module';
            case '{{envDict.npm_package_name}}':
                return 'example-module';
            case '{{envDict.npm_package_version}}':
                return '0.0.1';
            default:
                return '';
            }
        });
        local['/assets/fann.js'] = local.fann['/assets/fann.js'];
        local['/assets/utility2.css'] = '';
        local['/assets/utility2.js'] = '';
        local['/test/test.js'] = '';
        // create server
        local.server = local.http.createServer(function (request, response) {
            switch (local.url.parse(request.url).pathname) {
            // serve assets
            case '/':
            case '/assets/fann.js':
            case '/assets/utility2.css':
            case '/assets/utility2.js':
            case '/test/test.js':
                response.end(local[local.url.parse(request.url).pathname]);
                break;
            // default to 404 Not Found
            default:
                response.statusCode = 404;
                response.end('404 Not Found');
            }
        });
        if (process.env.npm_config_server_port) {
            return;
        }
        // start server
        local.serverPort = 1337;
        console.log('server starting on port ' + local.serverPort);
        local.server.listen(local.serverPort, function () {
            // this internal build-code will screen-capture the server
            // and then exit
            if (process.env.MODE_BUILD === 'testExampleJs') {
                console.log('server stopping on port ' + local.serverPort);
                require(
                    process.env.npm_config_dir_utility2 + '/index.js'
                ).phantomScreenCapture({
                    url: 'http://localhost:' + local.serverPort
                }, process.exit);
            }
        });
    }());
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
        // init fann-lite
        local.fann = local.modeJs === 'browser'
            ? window.fann
            : (function () {
                try {
                    return require('fann-lite');
                } catch (errorCaught) {
                    return require('./fann.js');
                }
            }());
        // export local
        module.exports = local;
    }());
    return local;
}())));
```

#### output from shell
[![screen-capture](https://kaizhu256.github.io/node-fann-lite/build/screen-capture.testExampleJs.svg)](https://travis-ci.org/kaizhu256/node-fann-lite)

#### output from phantomjs-lite
[![screen-capture](https://kaizhu256.github.io/node-fann-lite/build/screen-capture.testExampleJs.slimerjs..png)](https://hrku01-fann-lite-beta.herokuapp.com)

# npm-dependencies
- none



# package-listing
[![screen-capture](https://kaizhu256.github.io/node-fann-lite/build/screen-capture.gitLsTree.svg)](https://github.com/kaizhu256/node-fann-lite)



# package.json
```json
{
    "author": "kai zhu <kaizhu256@gmail.com>",
    "description": "pure javascript version of fann \
(fast artificial neural net library) with zero npm-dependencies \
(compiled from emscripten)",
    "devDependencies": {
        "phantomjs-lite": "^2015.7.1",
        "utility2": "~2015.8.5"
    },
    "keywords": [
        "ann",
        "fann",
        "net", "neural-net", "nn"
    ],
    "license": "MIT",
    "main": "fann.js",
    "name": "fann-lite",
    "os": ["darwin", "linux"],
    "repository": {
        "type": "git",
        "url": "https://github.com/kaizhu256/node-fann-lite.git"
    },
    "scripts": {
        "build-ci": "node_modules/.bin/utility2 shRun shReadmeBuild",
        "start": "npm_config_mode_auto_restart=1 \
node_modules/.bin/utility2 shRun node test.js",
        "test": "node_modules/.bin/utility2 shRun shReadmeExportPackageJson && \
node_modules/.bin/utility2 test test.js"
    },
    "version": "2015.8.1"
}
```



# todo
- add meaningful tests
- fix demo failure in firefox
- none



# change since commit 4931707a
- npm publish 2015.8.1
- update README.md
- none



# changelog of last 50 commits
[![screen-capture](https://kaizhu256.github.io/node-fann-lite/build/screen-capture.gitLog.svg)](https://github.com/kaizhu256/node-fann-lite/commits)



# internal build-script
- build.sh

```shell
# build.sh

# this shell script will run the build for this package

shBuild() {
    # this function will run the main build
    # init env
    export npm_config_mode_phantomjs=0 || return $?
    export npm_config_mode_slimerjs=1 || return $?
    . node_modules/.bin/utility2 && shInit || return $?

    # run npm-test on published package
    shRun shNpmTestPublished || return $?

    # test example js script
    export npm_config_timeout_exit=10000 || return $?
    MODE_BUILD=testExampleJs \
        shRunScreenCapture shReadmeTestJs example.js || return $?
    unset npm_config_timeout_exit || return $?

    # run npm-test
    MODE_BUILD=npmTest shRunScreenCapture npm test || return $?

    # if running legacy-node, then do not continue
    [ "$(node --version)" \< "v4.0" ] && return

    # deploy app to heroku
    shRun shHerokuDeploy hrku01-$npm_package_name-$CI_BRANCH || return $?
}
shBuild

# save exit-code
EXIT_CODE=$?
# create package-listing
MODE_BUILD=gitLsTree shRunScreenCapture shGitLsTree || exit $?
# create recent changelog of last 50 commits
MODE_BUILD=gitLog shRunScreenCapture git log -50 --pretty="%ai\u000a%B" || exit $?
# if running legacy-node, then do not continue
[ "$(node --version)" \< "v4.0" ] && exit $EXIT_CODE
# upload build-artifacts to github, and if number of commits > 16, then squash older commits
COMMIT_LIMIT=16 shBuildGithubUpload || exit $?
exit $EXIT_CODE
```
