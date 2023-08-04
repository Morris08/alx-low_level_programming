#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int is_positive_number(const char *s) {
	    while (*s) {
	           if (!isdigit(*s)) {
	   return 0;
        }
	      s++;
	      }
	   return 1;
}

int add_positive_numbers(int argc, char *argv[]) 
{
	    int total = 0;    
	  for (int i = 1; i < argc; i++) {
    if (!is_positive_number(argv[i])) {
        printf("Error\n"); 
	  return 1;
}
    total += atoi(argv[i]);
    }
    return total;
}

int main(int argc, char *argv[]) 
{
	    if (argc <= 1)
	 {
         printf("0\n");
    	 }
	 else
	{
	int result = add_positive_numbers(argc, argv);
        printf("%d\n", result);
	}
	    return 0;
}
