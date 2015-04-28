#include "foobar.hpp"
#include "FooBar.hpp"
#include <stdio.h>

int main(int argc, char* argv[]) {
	printf("PROJECT_VERSION: %f\n", PROJECT_VERSION);

	FooBar fooBar;
	fooBar.say();

	return 0;
}
