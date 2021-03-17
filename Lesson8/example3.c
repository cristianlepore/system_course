#include <stdio.h>

int main()
{
    char str[10], str2[10];

    str = "abc";     /* wrong */
    str2 = str;      /* wrong */
    str[10] = "abc"; /* correct */

    if (str == str2) /* wrong because these are two pointers */
        ;

    /* to compare two strings */
    strcpy(char *s1, const char *s2); /* it copies s2 in s1 and returns s1 */
    /* safer way is to use strncpy */
    /* strncpy will leave s1 without terminating null character if the length of s2 is greater than or equal to the size of the s1 array */
    strnpcy(s1, s2, sizeof(s1) - 1); /* because the last one I want to store the last char termination */

    /* example */
    strcpy(str, "abc");
    strcpy(str2, "def");
    strcat(str, str2); /* str now contains abcdef */

    /* string comparison based on lexicographic ordering */
    strcmp(s1, s2); /* it returns a negative number if s1 is smaller of s2, 0 if they are equals and >1 if s2 is bigger */

    return 0;
}