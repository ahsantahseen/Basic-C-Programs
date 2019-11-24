#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i=0;
    char str[50]="abc";
    char str1[50]="bc";
    char temp[50];
    strcpy(temp,str);
    strcpy(str,str1);
    strcpy(str1,temp);
    while(temp[i]!='\0')
    {
        temp[i]=0;
        i++;
    }

  printf("\n %s",temp);
  printf("\n %s",str);
  printf("\n %s",str1);
}
