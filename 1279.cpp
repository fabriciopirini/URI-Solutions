#include <stdio.h>
#include <math.h>
#include <string.h>
#include <iostream>

using namespace std;

int main() {
	long resto4 = 0, resto100 = 0, resto400 = 0, resto15 = 0, resto55 = 0, tam;
	int flag, leap, first = 1;
	char A[1000000];

	while(cin >> A) {

		if(first != 1)
			printf("\n");

		first = flag = leap = 0;
        tam = strlen(A);

		for(long i = 0; i < tam; ++i) {
			resto4 = ((resto4 * 10) + (int)A[i]) % 4;
			resto100 = ((resto100 * 10) + (int)A[i]) % 100;
			resto400 = ((resto400 * 10) + (int)A[i]) % 400;
			resto15 = ((resto15 * 10) + (int)A[i]) % 15;
			resto55 = ((resto55 * 10) + (int)A[i]) % 55;
		}

		if((resto4 == 0 && resto100 != 0) || resto400 == 0) {
			printf("This is leap year.\n");
			leap = 1;
			flag = 1;
		}

		if(resto15 == 0) {
			printf("This is huluculu festival year.\n");
			flag = 1;
		}

		if(leap == 1 && resto55 == 0)
			printf("This is bulukulu festival year.\n");

		if (flag == 0)
			printf("This is an ordinary year.\n");
	}

	return 0;
}
