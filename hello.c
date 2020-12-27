#include <stdio.h>

int main(int argc, char *argv[]) {
	printf("Hello World!\n");

	printf("argc = %d\n", argc);
	for (int n = 0; n < argc; n++) {
		printf("argv[%d] = %s\n", n, argv[n]);
	}

	return(0);
}
