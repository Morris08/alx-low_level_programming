#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main- entry point
 * Function to determine whether a number is positive, negative, or zero.
 *
 * @param n The input number to be evaluated.
 * @return A string indicating whether the number is positive, negative, or zero.
 */
const char* positive_or_negative(int n)
{
	if (n > 0)
	return "positive";
	else if (n < 0)
	return "negative";
	else
	return "zero";
}

/**
 * Test function to verify the positive_or_negative() function for the case of 0.
 */
void test_positive_or_negative_zero(void)
{
	int n = 0;
	const char* expected = "zero";
	const char* result = positive_or_negative(n);

	if (strcmp(result, expected) == 0) 
{
	printf("Test for 0 passed. Expected: %s, Actual: %s\n", expected, result);
}
else
{
	printf("Test for 0 failed. Expected: %s, Actual: %s\n", expected, result);
}
}

int main(void) 
{
	test_positive_or_negative_zero();

return (0);
}
