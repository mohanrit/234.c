#include<stdio.h>
void main()
{
    char s[30]="hello world.com";
    int b,i,a;
    b=strlen(s);
    for(i=0;i<=b;i++)
    {
        if(ispunct(s[i]))
        {
            a++;
            //printf("%d",a+1);
            
        }
    }printf("%d",a);
}
