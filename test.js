/* istanbul instrument in package fann-lite */
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
(function () {
    'use strict';
    var local;



    // run shared js-env code - pre-init
    (function () {
        // init Error.stackTraceLimit
        Error.stackTraceLimit = Infinity;
        // init local
        local = {};
        // init modeJs
        local.modeJs = (function () {
            try {
                return typeof navigator.userAgent === 'string' &&
                    typeof document.querySelector('body') === 'object' &&
                    typeof XMLHttpRequest.prototype.open === 'function' &&
                    'browser';
            } catch (errorCaughtBrowser) {
                return module.exports &&
                    typeof process.versions.node === 'string' &&
                    typeof require('http').createServer === 'function' &&
                    'node';
            }
        }());
        switch (local.modeJs) {
        // re-init local from window.local
        case 'browser':
            local = window.local;
            break;
        // re-init local from example.js
        case 'node':
            local = require('utility2').local;
            break;
        }
    }());
    switch (local.modeJs) {



    // run node js-env code post-init
    case 'node':
        // require module
        local.fann = require('./tmp/build/fann.js');
        local.fann._my_print_enum();

        local.ann = local.fann._fann_create_standard(3, 2, 3, 1);

        //!! local.data = local.fann._fann_create_train_from_array(
            //!! 4, 2, 1,
            //!! [-1, -1, -1, -1, 1, 1, 1, -1, 1, 1, 1, -1]
        //!! );
        //!! local.fann
        //!! .set_activation_function_hidden(local.ann, local.fann.ACTIVATION_SIGMOID_SYMMETRIC);
        //!! local.fann._fann_set_activation_function_output(local.ann, 5);
        //!! local.fann._fann_train_on_data(local.ann, local.data, 5000, 1000, 0.001);

        break;
    }
}());
