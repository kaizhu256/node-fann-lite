#include "external/doublefann.c"

const char *my_file_read(const char *file) {
/*
 * this function will read the text from the file
 */
    static char *buffer;
    long length;
	  FILE *fp = fopen(file, "r");
    if (!fp) {
        fprintf(stderr, "error - cannot open file %s\n", file);
        return NULL;
    }
    fseek(fp, 0, SEEK_END);
    length = ftell(fp);
    fseek(fp, 0, SEEK_SET);
    if (buffer) {
        buffer = malloc(length);
    } else {
        buffer = realloc(buffer, length);
    }
    if (buffer) {
      fread(buffer, 1, length, fp);
    }
    fclose(fp);
    return buffer;
}

int my_file_remove(const char *file) {
/*
 * this function will remove the file
 */
    return remove(file);
}

int my_file_write(const char *file, const char *text) {
/*
 * this function will write the text to the file
 */
    long length;
	  FILE *fp = fopen(file, "w");
    if (!fp) {
        fprintf(stderr, "error - cannot open file %s\n", file);
        return 1;
    }
    fprintf(fp, "%s", text);
    fclose(fp);
    return 0;
}

int my_print_constants() {
/*
 * this function will print global constants to stdout
 */
    printf("FANN_COS %d\n", FANN_COS);
    printf("FANN_COS_SYMMETRIC %d\n", FANN_COS_SYMMETRIC);
    printf("FANN_ELLIOT %d\n", FANN_ELLIOT);
    printf("FANN_ELLIOT_SYMMETRIC %d\n", FANN_ELLIOT_SYMMETRIC);
    printf("FANN_ERRORFUNC_LINEAR %d\n", FANN_ERRORFUNC_LINEAR);
    printf("FANN_ERRORFUNC_TANH %d\n", FANN_ERRORFUNC_TANH);
    printf("FANN_ERRSTR_MAX %d\n", FANN_ERRSTR_MAX);
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
    printf("FANN_GAUSSIAN %d\n", FANN_GAUSSIAN);
    printf("FANN_GAUSSIAN_STEPWISE %d\n", FANN_GAUSSIAN_STEPWISE);
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

int my_test() {
/*
 * this function will run tests
 */
    return 0;
}
