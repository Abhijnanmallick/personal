#include<stdio.h>
int main()
{
   system("d:\\linker.vbs");
    for(int i=0;;i++)
    {
        printf("%d",i);
        sleep(2);
        if(i==5)
        {
            system("echo off");
            system("taskkill /im vlc.exe");
        }
    }
}