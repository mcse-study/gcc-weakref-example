#include <stdio.h>

__attribute((weak))
void foo() {
	printf("%s:%d\n", __FILE__, __LINE__);
}

void bar() {
	printf("%s:%d\n", __FILE__, __LINE__);
}

void call_in_lib() {
	printf ("== Call in lib.c ==\n\n");
	foo();
	bar();
}
