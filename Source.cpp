#include <stdio.h>
#include "Header.h"

void sum_five(int* mas, int ind, int max_len, int* maxind, int res, int* resmin, int* indmin, int con) {
	int sum = 0;
	int i = 0;
	int z = 0;

	for (ind; i < 5; i++) {

		if (ind + i < max_len) {
			z = ind;
			sum += mas[z + i];
		}
		else {
			z = (ind + i) % max_len;
			sum += mas[z];
		}
	}

	if (sum > res || ind == 0) {
		res = sum;
		*maxind = ind;
	}

	if (sum < *resmin || ind == 0) {
		*resmin = sum;
		*indmin = ind;
	}

	ind++;

	while (((ind % max_len) != 0) || ind < max_len) {
		return sum_five(mas, ind, max_len, maxind, res, resmin, indmin, con);
	}

	printf("ind min: %d\nind max: %d", *indmin, *maxind);

}



