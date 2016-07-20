#include "external/doublefann.c"

FANN_EXTERNAL struct fann *FANN_API fann_create_array_8(
    unsigned int num_layers,
    unsigned int layer0,
    unsigned int layer1,
    unsigned int layer2,
    unsigned int layer3,
    unsigned int layer4,
    unsigned int layer5,
    unsigned int layer6,
    unsigned int layer7,
    int type,
    float connection_rate
) {
    int error;
    unsigned int layers[8];
    error = 0;
    layers[0] = layer0;
    if(layer0 > 1000000) error = 1;
    layers[1] = layer1;
    if(layer1 > 1000000) error = 1;
    layers[2] = layer2;
    if(layer2 > 1000000) error = 1;
    layers[3] = layer3;
    if(layer3 > 1000000) error = 1;
    layers[4] = layer4;
    if(layer4 > 1000000) error = 1;
    layers[5] = layer5;
    if(layer5 > 1000000) error = 1;
    layers[6] = layer6;
    if(layer6 > 1000000) error = 1;
    layers[7] = layer7;
    if(layer7 > 1000000) error = 1;
    if(error) {
        fann_error(NULL, FANN_E_CANT_ALLOCATE_MEM);
        return NULL;
    }
    switch (type) {
    case 0:
        return fann_create_standard_array(num_layers, layers);
    case 1:
        return fann_create_sparse_array(connection_rate, num_layers, layers);
    case 2:
        return fann_create_shortcut_array(num_layers, layers);
    }
    return NULL;
}
