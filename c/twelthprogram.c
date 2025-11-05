#include<stdio.h>
#include<string.h>

int main(){
   
    char str[100],st[100];
    int n,i,c=0,line,word,ch;

    printf("Enter string: ");
    gets(str);
    n=strlen(str);
    for(i=0;i<n/2;i++){
        if(str[i]==str[n-i-1])
            c++;
    }
        if(c==i){
            printf("string is palindrome!");
        }else{
            printf("string is not palindrome!");
        }
    
    line=word=ch=0;
    printf("Enter string terminated with * : ");
    gets(st);

    for(int i=0; st[i]!='\0'; i++)  
    {
        if(st[i]=='\n')  
        {
        line++;
        }else{  
            if(st[i]==' '||st[i]=='\t'){
                 word++;ch++;
            }else{
                    ch++; 
                 } 
        }
    }  
                     printf("\nCharacter counts = %d\n", ch);  
                     printf("Word counts = %d\n", word);  
                     printf("Line counts = %d\n", line);

    return 0;
}