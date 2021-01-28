#include <stdio.h>
#include <ctype.h>

int is_vowel(char c){
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main(){
    int c;

    while((c = getchar()) != EOF){
        if(is_vowel(c))
            putchar(c);
    }

    return 0;
}