#include <stdio.h>

#include "../includes/include.h"

// top, bottom, left and right

int main(int argc, char **argv) {
	int i;
	int j;

	if (argc < 2 || argc > 2)
		return (0);
	i = 1;
	while(argv[i] != 0) {
		// ft_putchar(argv[i]);
		j = 0;
		while (j <= 16) {
			printf("params[%d]: %ls\n", j, get_params(argv[i]));
			j++;
		}
		i++;
	}
	return (0);
}
