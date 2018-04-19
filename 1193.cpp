#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	int num;
	long int data, temp;
	char type[3];

	cin >> num;

	for(int i = 0; i < num; ++i) {
		scanf("%i", data);
		scanf("%s", &type);

		switch(type[3]) {
		case 'bin':
			printf("dec: %d\n", data);
			printf("hex: %x\n", data);
			break;
        case 'dec':
            printf("bin: %b\n", data);
			printf("hex: %x\n", data);
			break;
        case 'hex':
            printf("bin: %b\n", data);
			printf("dec: %d\n", data);
			break;
        default:
            cout << data << endl << type;
            break;
		}

	}

	return 0;
}
