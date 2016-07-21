CC=emcc
CFLAGS=\
		-Iexternal/include
EXPORTED_FUNCTIONS=\
		-s EXPORTED_FUNCTIONS='[\
    "_fann_cascadetrain_on_data",\
    "_fann_cascadetrain_on_file",\
    "_fann_clear_scaling_params",\
    "_fann_copy",\
    "_fann_create_from_file",\
    "_fann_create_shortcut",\
    "_fann_create_shortcut_array",\
    "_fann_create_sparse",\
    "_fann_create_sparse_array",\
    "_fann_create_standard",\
    "_fann_create_standard_array",\
    "_fann_create_train",\
    "_fann_destroy",\
    "_fann_error",\
    "_fann_get_MSE",\
    "_fann_get_activation_function",\
    "_fann_get_activation_steepness",\
    "_fann_get_bias_array",\
    "_fann_get_bit_fail",\
    "_fann_get_bit_fail_limit",\
    "_fann_get_cascade_activation_functions",\
    "_fann_get_cascade_activation_functions_count",\
    "_fann_get_cascade_activation_steepnesses",\
    "_fann_get_cascade_activation_steepnesses_count",\
    "_fann_get_cascade_candidate_change_fraction",\
    "_fann_get_cascade_candidate_limit",\
    "_fann_get_cascade_candidate_stagnation_epochs",\
    "_fann_get_cascade_max_cand_epochs",\
    "_fann_get_cascade_max_out_epochs",\
    "_fann_get_cascade_min_cand_epochs",\
    "_fann_get_cascade_min_out_epochs",\
    "_fann_get_cascade_num_candidate_groups",\
    "_fann_get_cascade_num_candidates",\
    "_fann_get_cascade_output_change_fraction",\
    "_fann_get_cascade_output_stagnation_epochs",\
    "_fann_get_cascade_weight_multiplier",\
    "_fann_get_connection_rate",\
    "_fann_get_layer_array",\
    "_fann_get_learning_momentum",\
    "_fann_get_learning_rate",\
    "_fann_get_network_type",\
    "_fann_get_num_input",\
    "_fann_get_num_layers",\
    "_fann_get_num_output",\
    "_fann_get_quickprop_decay",\
    "_fann_get_quickprop_mu",\
    "_fann_get_rprop_decrease_factor",\
    "_fann_get_rprop_delta_max",\
    "_fann_get_rprop_delta_min",\
    "_fann_get_rprop_delta_zero",\
    "_fann_get_rprop_increase_factor",\
    "_fann_get_sarprop_step_error_shift",\
    "_fann_get_sarprop_step_error_threshold_factor",\
    "_fann_get_sarprop_temperature",\
    "_fann_get_sarprop_weight_decay_shift",\
    "_fann_get_total_connections",\
    "_fann_get_total_neurons",\
    "_fann_get_train_error_function",\
    "_fann_get_train_stop_function",\
    "_fann_get_training_algorithm",\
    "_fann_get_user_data",\
    "_fann_print_connections",\
    "_fann_print_parameters",\
    "_fann_read_train_from_file",\
    "_fann_reset_MSE",\
    "_fann_save",\
    "_fann_save_to_fixed",\
    "_fann_save_train",\
    "_fann_save_train_to_fixed",\
    "_fann_set_activation_function",\
    "_fann_set_activation_function_hidden",\
    "_fann_set_activation_function_layer",\
    "_fann_set_activation_function_output",\
    "_fann_set_activation_steepness",\
    "_fann_set_activation_steepness_hidden",\
    "_fann_set_activation_steepness_layer",\
    "_fann_set_activation_steepness_output",\
    "_fann_set_cascade_activation_functions",\
    "_fann_set_cascade_activation_steepnesses",\
    "_fann_set_cascade_candidate_change_fraction",\
    "_fann_set_cascade_candidate_limit",\
    "_fann_set_cascade_candidate_stagnation_epochs",\
    "_fann_set_cascade_max_cand_epochs",\
    "_fann_set_cascade_max_out_epochs",\
    "_fann_set_cascade_min_cand_epochs",\
    "_fann_set_cascade_min_out_epochs",\
    "_fann_set_cascade_num_candidate_groups",\
    "_fann_set_cascade_output_change_fraction",\
    "_fann_set_cascade_output_stagnation_epochs",\
    "_fann_set_cascade_weight_multiplier",\
    "_fann_set_input_scaling_params",\
    "_fann_set_learning_momentum",\
    "_fann_set_learning_rate",\
    "_fann_set_output_scaling_params",\
    "_fann_set_quickprop_decay",\
    "_fann_set_quickprop_mu",\
    "_fann_set_rprop_decrease_factor",\
    "_fann_set_rprop_delta_max",\
    "_fann_set_rprop_delta_min",\
    "_fann_set_rprop_delta_zero",\
    "_fann_set_rprop_increase_factor",\
    "_fann_set_sarprop_step_error_shift",\
    "_fann_set_sarprop_step_error_threshold_factor",\
    "_fann_set_sarprop_temperature",\
    "_fann_set_sarprop_weight_decay_shift",\
    "_fann_set_scaling_params",\
    "_fann_set_train_error_function",\
    "_fann_set_train_stop_function",\
    "_fann_set_training_algorithm",\
    "_fann_set_user_data",\
    "_fann_train_on_file",\
    "_my_print_enum",\
    "_my_test"\
]'

all: fann example
clean:
		rm *.net tmp/build/*.mem tmp/build/*.out tmp/build/*.js 2>/dev/null || true
example:
		gcc example.c -o tmp/build/example.out -Iexternal/include
fann:
		$(CC) -o tmp/build/fann.js fann.c $(CFLAGS) $(EXPORTED_FUNCTIONS) && \
		printf "\nModule.FS=FS;\n" >> tmp/fann.js
test: example
		tmp/build/example.out && \
		printf "\n\ntest.xor.data\n" && \
		cat test.xor.data && \
		printf "\n\ntest.xor_double.net\n" && \
		cat test.xor_double.net && \
		rm *.net
