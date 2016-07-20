#include "external/doublefann.c"

//!! FANN_EXTERNAL struct fann *FANN_API fann_create_array_8(
    //!! unsigned int num_layers,
    //!! unsigned int layer0,
    //!! unsigned int layer1,
    //!! unsigned int layer2,
    //!! unsigned int layer3,
    //!! unsigned int layer4,
    //!! unsigned int layer5,
    //!! unsigned int layer6,
    //!! unsigned int layer7,
    //!! int type,
    //!! float connection_rate
//!! ) {
    //!! int error;
    //!! unsigned int layers[8];
    //!! error = 0;
    //!! layers[0] = layer0;
    //!! if(layer0 > 1000000) error = 1;
    //!! layers[1] = layer1;
    //!! if(layer1 > 1000000) error = 1;
    //!! layers[2] = layer2;
    //!! if(layer2 > 1000000) error = 1;
    //!! layers[3] = layer3;
    //!! if(layer3 > 1000000) error = 1;
    //!! layers[4] = layer4;
    //!! if(layer4 > 1000000) error = 1;
    //!! layers[5] = layer5;
    //!! if(layer5 > 1000000) error = 1;
    //!! layers[6] = layer6;
    //!! if(layer6 > 1000000) error = 1;
    //!! layers[7] = layer7;
    //!! if(layer7 > 1000000) error = 1;
    //!! if(error) {
        //!! fann_error(NULL, FANN_E_CANT_ALLOCATE_MEM);
        //!! return NULL;
    //!! }
    //!! switch (type) {
    //!! case 0:
        //!! return fann_create_standard_array(num_layers, layers);
    //!! case 1:
        //!! return fann_create_sparse_array(connection_rate, num_layers, layers);
    //!! case 2:
        //!! return fann_create_shortcut_array(num_layers, layers);
    //!! }
    //!! return NULL;
//!! }


int my_print_enum() {
    printf("FANN_COS %d\n", FANN_COS);
    printf("FANN_COS_SYMMETRIC %d\n", FANN_COS_SYMMETRIC);
    printf("FANN_E_CANT_ALLOCATE_MEM %d\n", FANN_E_CANT_ALLOCATE_MEM);
    printf("FANN_E_CANT_OPEN_CONFIG_R %d\n", FANN_E_CANT_OPEN_CONFIG_R);
    printf("FANN_E_CANT_OPEN_CONFIG_W %d\n", FANN_E_CANT_OPEN_CONFIG_W);
    printf("FANN_E_CANT_OPEN_TD_R %d\n", FANN_E_CANT_OPEN_TD_R);
    printf("FANN_E_CANT_OPEN_TD_W %d\n", FANN_E_CANT_OPEN_TD_W);
    printf("FANN_E_CANT_READ_CONFIG %d\n", FANN_E_CANT_READ_CONFIG);
    printf("FANN_E_CANT_READ_CONNECTIONS %d\n", FANN_E_CANT_READ_CONNECTIONS);
    printf("FANN_E_CANT_READ_NEURON %d\n", FANN_E_CANT_READ_NEURON);
    printf("FANN_E_CANT_READ_TD %d\n", FANN_E_CANT_READ_TD);
    printf("FANN_E_CANT_TRAIN_ACTIVATION %d\n", FANN_E_CANT_TRAIN_ACTIVATION);
    printf("FANN_E_CANT_USE_ACTIVATION %d\n", FANN_E_CANT_USE_ACTIVATION);
    printf("FANN_E_CANT_USE_TRAIN_ALG %d\n", FANN_E_CANT_USE_TRAIN_ALG);
    printf("FANN_E_INDEX_OUT_OF_BOUND %d\n", FANN_E_INDEX_OUT_OF_BOUND);
    printf("FANN_E_INPUT_NO_MATCH %d\n", FANN_E_INPUT_NO_MATCH);
    printf("FANN_E_NO_ERROR %d\n", FANN_E_NO_ERROR);
    printf("FANN_E_OUTPUT_NO_MATCH %d\n", FANN_E_OUTPUT_NO_MATCH);
    printf("FANN_E_SCALE_NOT_PRESENT %d\n", FANN_E_SCALE_NOT_PRESENT);
    printf("FANN_E_TRAIN_DATA_MISMATCH %d\n", FANN_E_TRAIN_DATA_MISMATCH);
    printf("FANN_E_TRAIN_DATA_SUBSET %d\n", FANN_E_TRAIN_DATA_SUBSET);
    printf("FANN_E_WRONG_CONFIG_VERSION %d\n", FANN_E_WRONG_CONFIG_VERSION);
    printf("FANN_E_WRONG_NUM_CONNECTIONS %d\n", FANN_E_WRONG_NUM_CONNECTIONS);
    printf("FANN_ELLIOT %d\n", FANN_ELLIOT);
    printf("FANN_ELLIOT_SYMMETRIC %d\n", FANN_ELLIOT_SYMMETRIC);
    printf("FANN_ERRORFUNC_LINEAR %d\n", FANN_ERRORFUNC_LINEAR);
    printf("FANN_ERRORFUNC_TANH %d\n", FANN_ERRORFUNC_TANH);
    printf("FANN_GAUSSIAN %d\n", FANN_GAUSSIAN);
    printf("FANN_GAUSSIAN_SYMMETRIC %d\n", FANN_GAUSSIAN_SYMMETRIC);
    printf("FANN_LINEAR %d\n", FANN_LINEAR);
    printf("FANN_LINEAR_PIECE %d\n", FANN_LINEAR_PIECE);
    printf("FANN_LINEAR_PIECE_SYMMETRIC %d\n", FANN_LINEAR_PIECE_SYMMETRIC);
    printf("FANN_NETTYPE_LAYER %d\n", FANN_NETTYPE_LAYER);
    printf("FANN_NETTYPE_SHORTCUT %d\n", FANN_NETTYPE_SHORTCUT);
    printf("FANN_SIGMOID %d\n", FANN_SIGMOID);
    printf("FANN_SIGMOID_STEPWISE %d\n", FANN_SIGMOID_STEPWISE);
    printf("FANN_SIGMOID_SYMMETRIC %d\n", FANN_SIGMOID_SYMMETRIC);
    printf("FANN_SIGMOID_SYMMETRIC_STEPWISE %d\n", FANN_SIGMOID_SYMMETRIC_STEPWISE);
    printf("FANN_SIN %d\n", FANN_SIN);
    printf("FANN_SIN_SYMMETRIC %d\n", FANN_SIN_SYMMETRIC);
    printf("FANN_STOPFUNC_BIT %d\n", FANN_STOPFUNC_BIT);
    printf("FANN_STOPFUNC_MSE %d\n", FANN_STOPFUNC_MSE);
    printf("FANN_THRESHOLD %d\n", FANN_THRESHOLD);
    printf("FANN_THRESHOLD_SYMMETRIC %d\n", FANN_THRESHOLD_SYMMETRIC);
    printf("FANN_TRAIN_BATCH %d\n", FANN_TRAIN_BATCH);
    printf("FANN_TRAIN_INCREMENTAL %d\n", FANN_TRAIN_INCREMENTAL);
    printf("FANN_TRAIN_QUICKPROP %d\n", FANN_TRAIN_QUICKPROP);
    printf("FANN_TRAIN_RPROP %d\n", FANN_TRAIN_RPROP);
    printf("FANN_TRAIN_SARPROP %d\n", FANN_TRAIN_SARPROP);
    return 0;
}
