#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
char str1[50],str2[50];
printf("\n ENTER STRING 1:");gets(str1);
printf("\n ENTER STRING 2:");gets(str2);
int result; //if they are equal it will return 0 to result ,if not then it will return 1//
result=strcmp(str1,str2);
if(result==0)
{
    printf("\n THEY ARE EQUAL");
}
else
{
    printf("\n THEY ARE NOT EQUAL");
}


}
