#include <stdio.h>
#include "external/doublefann.c"
int test_load() {
    /*
     * http://leenissen.dk/fann/html/files2/gettingstarted-txt.html
     * this function will test fann's file-load function
     */
    // create ann from file xor_double.net
    fann_type *calc_out;
    fann_type input[2];
    struct fann *ann = fann_create_from_file("test.xor_double.net");
    input[0] = -1;
    input[1] = 1;
    calc_out = fann_run(ann, input);
    printf("xor test (%f,%f) -> %f\n", input[0], input[1], calc_out[0]);
    fann_destroy(ann);
    return 0;
}

int test_save() {
    /*
     * http://leenissen.dk/fann/html/files2/gettingstarted-txt.html
     * this function will test fann's file-save function
     */
    // create ann
    const unsigned int num_input = 2;
    const unsigned int num_output = 1;
    const unsigned int num_layers = 3;
    const unsigned int num_neurons_hidden = 3;
    const double desired_error = (const double) 0.001;
    const unsigned int max_epochs = 500000;
    const unsigned int epochs_between_reports = 1000;
    struct fann *ann = fann_create_standard(
        num_layers,
        num_input,
        num_neurons_hidden,
        num_output
    );
    fann_set_activation_function_hidden(ann, FANN_SIGMOID_SYMMETRIC);
    fann_set_activation_function_output(ann, FANN_SIGMOID_SYMMETRIC);
    // train ann
    fann_train_on_file(
        ann,
        "test.xor.data",
        max_epochs,
        epochs_between_reports,
        desired_error
    );
    // save ann to file xor_double.net
    fann_save(ann, "test.xor_double.net");
    fann_destroy(ann);
    return 0;
}

int test_cascadetrain() {
    // http://leenissen.dk/fann/forum/viewtopic.php?f=1&t=1020
    struct fann *ann;
    struct fann_train_data *train_data;
    const float desired_error = (const float) 0.001;
    const unsigned int max_epochs = 500000;
    const unsigned int epochs_between_reports = 1;
    enum fann_activationfunc_enum activation[2];
    printf("Reading Data\n");
    train_data = fann_read_train_from_file("data/nn10.data");
    fann_scale_train_data(train_data, -1, 1);
    printf("Creating Network\n");
    ann = fann_create_shortcut(2, fann_num_input_train_data(train_data),    fann_num_output_train_data(train_data));
    fann_print_parameters(ann);
    printf("Training Network\n");
    fann_cascadetrain_on_file(ann, "data/nn10.data", max_epochs, epochs_between_reports, desired_error);
    printf("Saving Network.\n");
    fann_save(ann, "nn10.net");
    printf("Cleaning up.\n");
    fann_destroy_train(train_data);
    fann_destroy(ann);
    return 0;
}

int main() {
    test_save();
    test_load();
    return 0;
}
