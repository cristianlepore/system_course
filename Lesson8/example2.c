#include <stdio.h>
#define STR_LEN 80

int main()
{
    char str[STR_LEN + 1]; /* +1 because of the end character */

    char str[] = "Hello World!"; /* I can modify the position 3 */
    char *p = "Hello World!";    /* I cannot modify position 3 because it is a pointer */
    p[1] = 'b';                  /* this is not possible because p is a pointer to char */

    /* I can initialize the pointer in this way */
    p = str;

    /* we can use this to iterate over a string */
    /* check the final terminato \0 to understand if you have reached the end of the string */
    for (int i = 0; str[i] != '\0'; i++)
        str[i];
    /* same with pointers */
    for (; *p != '\0'; p++)
        *p;

    return 0;
}