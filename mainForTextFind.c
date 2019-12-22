#include "textfind.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 int main(int argc, char const *argv[]){
    
    char word[WORD];
    getword(word);
    char command[WORD];
    getword(command);
    char line1[LINE];
    getline1(line1);
    getline1(line1);
     if(strcmp(command, "a") == 0){
        print_lines(word);
     }
    if(strcmp(command, "b") == 0){
        print_similar_words(word);
    }
return 0;

}