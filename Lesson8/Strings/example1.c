#include <stdio.h>

int main()
{
    /* We have string constants and string variables. */
    /* String constants do not change. So we cannot assign a new value to these strings. */

    /* There is a special character to mark the end of the string \0 */

    /* String is a sequence of chars as follow */
    char str[] = "Hello World!";

    /* This is stored as a single null character \0 */
    char str[] = "";

    /* we can also use pointers to point to a string */
    char *p;
    p = "abc"; /* p points to the first character of the string */

    p = "xyz"; /* I cannot change this. I can make p point to another string, but I cannot change it */

    char ch;
    ch = "abc"[1]; /* the new value of ch will be b */

    "a"; /* this is treated as a pointer */
    'a'; /* this is treated as an integer value */

    return 0;
}