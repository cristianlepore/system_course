
int length(char *s){
    int len = 0;
    while(*s != '\0'){
        len++;
        s++;  /* or s+1 */
    }
    return len;
}

int main(){
    char s[] = {'H','e','l','l','o', '\0'};
    length(s);

    return 0;
}