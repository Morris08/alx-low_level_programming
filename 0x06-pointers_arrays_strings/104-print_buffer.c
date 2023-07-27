#include <stdio.h>
#include <ctype.h>

void print_buffer(char *b, int size) 
{
	int i, j;

	if (size <= 0) 
	{
	printf("\n");
	return;
	}

	for (i = 0; i < size; i += 10) 
	{
	printf("%08x ", i);

	// Print hexadecimal content
	for (j = 0; j < 10; j++) 
	{
	if (i + j < size)
	printf("%02x ", (unsigned char)b[i + j]);
	else
	printf("   ");
	}

	printf(" ");

	// Print ASCII content
	for (j = 0; j < 10; j++) 
	{
	if (i + j < size) 
	{
	char ch = b[i + j];
	printf("%c", isprint(ch) ? ch : '.');
	}
	else
	{
	printf(" ");
	}
	}

	printf("\n");
	}
}

// Example usage
int main(void) 
{
	char buffer[] = "This is a string!\0And this is the rest of the #buffer :)\1\2\3\4\5\6\7#cisfun\n\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x20\x21\x34\x56#pointersarefun #infernumisfun\n";
	int size = sizeof(buffer) - 1; // Exclude the null terminator
	printf("%s\n", buffer);
	printf("---------------------------------\n");
	print_buffer(buffer, size);
return 0;
}
