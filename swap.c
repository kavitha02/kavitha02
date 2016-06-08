#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
     char s[20],t;
     int i,j;
     scanf("%s",s);
     for(i=0;i<strlen(str);i=i+2)
     {
     t = s[i];
     s[i] = s[i+1];
     s[i+1] = t;
     }
     printf("%s",s);
     return 0;
}
