#include <stdlib.h>
#include <stdio.h>

#include "../includes/include.h"

// top, bottom, left and right

int main(int argc, char **argv) {
	int i;
	int j;
	int *params;

	if (argc < 2 || argc > 2)
		return (0);
	i = 1;
	params = get_params(argv[i]);
	j = 0;
	while (j < 16) {
		printf("[%d]: %d, ", j, params[j]);
		j++;
	}
	free(params);
	return (0);
}
