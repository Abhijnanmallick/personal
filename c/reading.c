#include<stdio.h>

int main()
{

    
FILE *ptr;
ptr=fopen("c:\\users\\abhij\\desktop\\lol.txt","a++");

char ch;
while(ch!=EOF)
{
    ch=fgetc(ptr);
    printf("%c",ch);
}
fclose(ptr);
}