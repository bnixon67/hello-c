// Copyright 2024 Bill Nixon. All rights reserved.
// Use of this source code is governed by the license found in the LICENSE file.

#include <stdio.h>

int main(int argc, char *argv[]) {
	printf("hello");

	printf("argc = %d\n", argc);
	for (int n = 0; n < argc; n++) {
		printf("argv[%d] = \"%s\"\n", n, argv[n]);
	}

	return 0;
}
