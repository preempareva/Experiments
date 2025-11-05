#include <stdio.h>

void printhello(){
    printf("hello people!!\n");
    printf("my name is preem!!\n");
}

void printgoodbye(){
    printf("goodbye poeple!!\n");
    printf("by preem!!\n");
}

void bonjour(){
    printf("bonjour !!");
}

void namaste(){
    printf("namaste !!");
}

int main(){
    
    printhello();
    printgoodbye();
    
    char ch;
    printf("Enter nationality : french or indian (F/I) ");
    scanf("%c",&ch);
    
if (ch == 'f'){
    bonjour();
}else{
    namaste();
}

    return 0;
}