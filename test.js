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
            // require module
            local.fann = require('./tmp/build/fann.js');
            break;
        }
        local.fann.FANN_COS = 17;
        local.fann.FANN_COS_SYMMETRIC = 15;
        local.fann.FANN_E_CANT_ALLOCATE_MEM = 11;
        local.fann.FANN_E_CANT_OPEN_CONFIG_R = 1;
        local.fann.FANN_E_CANT_OPEN_CONFIG_W = 2;
        local.fann.FANN_E_CANT_OPEN_TD_R = 9;
        local.fann.FANN_E_CANT_OPEN_TD_W = 8;
        local.fann.FANN_E_CANT_READ_CONFIG = 4;
        local.fann.FANN_E_CANT_READ_CONNECTIONS = 6;
        local.fann.FANN_E_CANT_READ_NEURON = 5;
        local.fann.FANN_E_CANT_READ_TD = 10;
        local.fann.FANN_E_CANT_TRAIN_ACTIVATION = 12;
        local.fann.FANN_E_CANT_USE_ACTIVATION = 13;
        local.fann.FANN_E_CANT_USE_TRAIN_ALG = 15;
        local.fann.FANN_E_INDEX_OUT_OF_BOUND = 17;
        local.fann.FANN_E_INPUT_NO_MATCH = 19;
        local.fann.FANN_E_NO_ERROR = 0;
        local.fann.FANN_E_OUTPUT_NO_MATCH = 20;
        local.fann.FANN_E_SCALE_NOT_PRESENT = 18;
        local.fann.FANN_E_TRAIN_DATA_MISMATCH = 14;
        local.fann.FANN_E_TRAIN_DATA_SUBSET = 16;
        local.fann.FANN_E_WRONG_CONFIG_VERSION = 3;
        local.fann.FANN_E_WRONG_NUM_CONNECTIONS = 7;
        local.fann.FANN_ELLIOT = 10;
        local.fann.FANN_ELLIOT_SYMMETRIC = 11;
        local.fann.FANN_ERRORFUNC_LINEAR = 0;
        local.fann.FANN_ERRORFUNC_TANH = 1;
        local.fann.FANN_GAUSSIAN = 7;
        local.fann.FANN_GAUSSIAN_SYMMETRIC = 8;
        local.fann.FANN_LINEAR = 0;
        local.fann.FANN_LINEAR_PIECE = 12;
        local.fann.FANN_LINEAR_PIECE_SYMMETRIC = 13;
        local.fann.FANN_NETTYPE_LAYER = 0;
        local.fann.FANN_NETTYPE_SHORTCUT = 1;
        local.fann.FANN_SIGMOID = 3;
        local.fann.FANN_SIGMOID_STEPWISE = 4;
        local.fann.FANN_SIGMOID_SYMMETRIC = 5;
        local.fann.FANN_SIGMOID_SYMMETRIC_STEPWISE = 6;
        local.fann.FANN_SIN = 16;
        local.fann.FANN_SIN_SYMMETRIC = 14;
        local.fann.FANN_STOPFUNC_BIT = 1;
        local.fann.FANN_STOPFUNC_MSE = 0;
        local.fann.FANN_THRESHOLD = 1;
        local.fann.FANN_THRESHOLD_SYMMETRIC = 2;
        local.fann.FANN_TRAIN_BATCH = 1;
        local.fann.FANN_TRAIN_INCREMENTAL = 0;
        local.fann.FANN_TRAIN_QUICKPROP = 3;
        local.fann.FANN_TRAIN_RPROP = 2;
        local.fann.FANN_TRAIN_SARPROP = 4;
    }());
    switch (local.modeJs) {



    // run node js-env code post-init
    case 'node':
        //!! local.fann._my_print_enum();

        //!! local.ann = local.fann._fann_create_standard(3, 2, 3, 1);

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
