#include <stdio.h>
#include <string.h>

struct Books {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};
 
int main( ) {

   struct Books Book1;

   strcpy(Book1.title, "My first book");
   Book1.book_id = 2324;

   return 0;
}
