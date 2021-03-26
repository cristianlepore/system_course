#include <stdio.h> /* header is the primary repository of input/output */
#include <stdlib.h>

/* in C a stream means any source of input */
/* the standard is keyboard and screen */

/* file pointers */
FILE *fp;

/* accessing a stream is done through a file pointer */
/* FILE i declared in <stdio.h> */
FILE *fopen(const char *filename, const char *mode);
/* This returns a pointer to the file opened */