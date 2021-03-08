#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Header.h"

int main() {
	int mas[1024];
	int max_len;
	int sum = 0;
	int max_ind = 0;
	int ind = 0, res = 0;
	int res_min = 0, ind_min = 0;
	int i = 0, g = 0;
	printf("First enter the number of items, then each item. \nEnter the number of digits: ");

	if (scanf("%d", &max_len) != 1) {
		printf("Please enter normal numbers");
		return -1;
	}
	else {
		for (i = 0; i != max_len; i++) {
			if (scanf("%d", &mas[i]) != 1) {
				printf("Please enter normal numbers");
				return -1;
				break;
			}
		}
	}

	if (i == max_len) {

	    sum_five(mas, ind, max_len, &max_ind, res, &res_min, &ind_min, 5);

		return 0;
	}

	else return -1;
}