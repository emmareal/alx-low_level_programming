#include <stdio.h>
/**
 * main-program entry point.
 * Return:0 no error, non zero if error.
 **/
int main(void)
{
        char alphabet;
	char ch;

        for (alphabet = 'a'; alphabet <= 'z'; alphabet ++) {
	putchar(alphabet);
        }
	for (ch = 'A' ; ch <= 'Z' ; ch++) 
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
