#include <stdio.h>
#include <string.h>
#include <ctype.h> 
int main () {
    char str [10000];
    fgets (str, sizeof(str), stdin);
    int chars = 0;
    int words = 1;
    for (int i = 0; i < strlen(str); i++) {    
        if (str[i] != ' ' && str[i]!= '\n') chars++;
    } 
    for (int i = 0; i <= strlen(str); i++) {
        if (str[i] == ' ') words++;
    }
    printf ("%d %d", chars, words ); 
}
