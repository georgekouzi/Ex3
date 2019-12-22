#include "textfind.h"
#include <stdio.h>
#include <string.h>
int substring( char * str1, char * str2){
    if(strstr(str2, str1) != NULL){
        return 1;
    }
    return 0;
}

int similar(char *s, char *t, int n) {
    char *str_small = NULL, *str_long = NULL;
    int diff_counter = 0;
    size_t len_s = strlen(s), len_t = strlen(t);

  
    if ((len_s + n) != len_t && (len_t + n) != len_s){
        return 0;
    }

    
    if (len_s < len_t) {
        str_small = s;
        str_long = t;
    } else {
        str_small = t;
        str_long = s;
    }

    
    do {
        if (*str_small != *str_long) {
            if (++diff_counter > n)
                break;
        }
        else
            ++str_small; 
        ++str_long; 
    } while(*str_small);

    return diff_counter == n;
}

int getword(char w[]){
    char ch;
    int length = 0;
    int rc = scanf("%c", &ch);
    while(rc == 1 && ch != '\n' && ch != '\t' && ch != ' '){
        w[length] = ch;
        length = length + 1;
        rc = scanf("%c", &ch);
    }
    w[length] = '\0';
    return length;
}
int getline1(char s[]){
    char ch;
    int length = 0;
    int rc = scanf("%c", &ch);
    while(rc == 1 && ch != '\n'){
        s[length++] = ch;
        rc = scanf("%c", &ch);
    }
    s[length] = '\0';
    return length;
}

void print_lines(char * str){
    char w[LINE];
    while(getline1(w) != 0){
        if(substring(str, w)){
            printf("%s\n", w);
        };
    }
}
void print_similar_words(char * str){
    char w[WORD];
    while(getword(w)){
        if(similar(w, str, 1)){
            printf("%s\n", w);
        }
    }
}