#include <stdio.h>

int main(void)
{

        /* Get the character to be written */
        char ch;

        /* Write the Character to stdout */
        for (ch = 'a'; ch <= 'z'; ch++)
                putchar(ch);

	for (ch = 'A'; ch <= 'Z'; ch++)
                putchar(ch);

        putchar('\n');
        return (0);
}
