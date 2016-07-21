// http://leenissen.dk/fann/html/files2/gettingstarted-txt.html
#include "external/doublefann.c"
int main()
{
    // create ann1
    const unsigned int num_input = 2;
    const unsigned int num_output = 1;
    const unsigned int num_layers = 3;
    const unsigned int num_neurons_hidden = 3;
    const double desired_error = (const double) 0.001;
    const unsigned int max_epochs = 500000;
    const unsigned int epochs_between_reports = 1000;
    struct fann *ann1 = fann_create_standard(num_layers, num_input, num_neurons_hidden, num_output);
    fann_set_activation_function_hidden(ann1, FANN_SIGMOID_SYMMETRIC);
    fann_set_activation_function_output(ann1, FANN_SIGMOID_SYMMETRIC);
    // train ann1
    fann_train_on_file(ann1, "xor.data", max_epochs, epochs_between_reports, desired_error);
    // save ann1 to file xor_double.net
    fann_save(ann1, "xor_double.net");
    fann_destroy(ann1);
    // create ann2 from file xor_double.net
    fann_type *calc_out;
    fann_type input[2];
    struct fann *ann2 = fann_create_from_file("xor_double.net");
    input[0] = -1;
    input[1] = 1;
    calc_out = fann_run(ann2, input);
    printf("xor test (%f,%f) -> %f\n", input[0], input[1], calc_out[0]);
    fann_destroy(ann2);
    return 0;
}
//!! #include <stdio.h>
//!! #include "external/doublefann.c"
//!! int main()
//!! {
        //!! struct fann *ann1;
        //!! struct fann_train_data *train_data;
        //!! const float desired_error = (const float) 0.001;
        //!! const unsigned int max_epochs = 500000;
        //!! const unsigned int epochs_between_reports = 1;
        //!! enum fann_activationfunc_enum activation[2];
        //!! printf("Reading Data\n");
        //!! train_data = fann_read_train_from_file("data/nn10.data");
        //!! fann_scale_train_data(train_data, -1, 1);
        //!! printf("Creating Network\n");
        //!! ann1 = fann_create_shortcut(2, fann_num_input_train_data(train_data),    fann_num_output_train_data(train_data));
        //!! fann_print_parameters(ann1);
        //!! printf("Training Network\n");
        //!! fann_cascadetrain_on_file(ann1, "data/nn10.data", max_epochs, epochs_between_reports, desired_error);
        //!! printf("Saving Network.\n");
        //!! fann_save(ann1, "nn10.net");
        //!! printf("Cleaning up.\n");
        //!! fann_destroy_train(train_data);
        //!! fann_destroy(ann1);
        //!! return 0;
//!! }

