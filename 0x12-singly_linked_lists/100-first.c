#include <stdio.h>
/**
 * c- prints  before the main function is executed
 */
void c(void) __attribute__ ((constructor));
void c(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
