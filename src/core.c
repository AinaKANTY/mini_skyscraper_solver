#include <stdlib.h>

int *get_params(char *str) {
	int *array_int;
	int count;
	int i;

	i = 0;
	count = 0;
	while (str[i] != '\0') {
		if (str[i] >= '0' && str[i] <= '9')
			count++;
		i++;
	}
	array_int = malloc(sizeof(int*) * count);
	if (array_int == NULL)
		return (int*)(-1);
	return (array_int);
}
