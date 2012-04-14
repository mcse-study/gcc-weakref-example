#include <stdio.h>

#ifdef CUSTOM_FOO
	void foo() {
		printf ("custom foo!\n");
	}
#else
	void foo();
#endif

#ifdef CUSTOM_BAR
	static void bar () __attribute__ ((weakref( "my_bar"))) ;

	void my_bar() {
		printf ("my bar()!\n");
	}
#else
	void bar();
#endif

void call_in_user() {
	printf ("== Call in user.c ==\n\n");
	foo();
	bar();
	printf ("\n");
}

void call_in_lib();

int main() {
	call_in_user();
	call_in_lib();
	return 0;
}

