#include <stdio.h>

#if X == 0
void f0() { puts("0"); }
#else
void f1() { puts("1"); }
#endif

int main(void) {
#if X == 0
	f0("0");
#else
	f1("1");
#endif
}
