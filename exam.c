#include<stdio.h>
#include<string.h>
void main()/*{
    char s1[10];
    printf("enter the string\n");
    gets(s1);
    printf("length of the string is %d",strlen(s1));
    printf("")
}*/
{
    char s1[10], s2[9];
    printf("enter the screen");
    gets(s1);
    strncpy(s2,s1,2);
    printf("length of screen is %s",s2 );
}