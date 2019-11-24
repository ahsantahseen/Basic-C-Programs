#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
char str[40];
int i=0,c=0;
printf("\n ENTER STRING");gets(str);
while(str[i]!='\0')
{


    if(str[i]!=' ')
{
    c++;
}

i++;
}
printf("THE LENGTH OF THE STRING IS %d CHARS",c);

}
