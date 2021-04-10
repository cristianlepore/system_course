#include <stdio.h> /* header is the primary repository of input/output */

/* in C a stream means any source of input or any destination of output*/
/* the input and output standards are typically keyboard and screen */

#include <stdlib.h>

/* Accessing a stream is done through a file pointer */
FILE *fp; /* pointer to the beginning of the file */

/* The main different is the kind of files that you want to use:
1. text file --> characters that are human readable
2. binary files --> ex. the a.out file stored in a binaty file.
*/

/* Text files have carriage return and line feed */

/* accessing a stream is done through a file pointer */
/* FILE i declared in <stdio.h> */
FILE *fopen(const char *filename, const char *mode);
/* This returns a pointer to the file opened */

/* If something goes wrong, it returns a null value */

/* When you have finished, you have to close the file */
fclose(/* pass the file pointer that you have created before */);
