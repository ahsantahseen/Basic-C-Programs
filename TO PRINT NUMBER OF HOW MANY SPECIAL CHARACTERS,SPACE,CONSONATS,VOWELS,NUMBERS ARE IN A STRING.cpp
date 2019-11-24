#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
char str[41];
int i=0,special=0,con=0,space=0,vow=0,num=0;
printf("\n ENTER A STRING OF CHARACTERS");
gets(str);
while(str[i]!='\0')
{  if(str[i]>='a'||str[i]>='A'&&str[i]<='z'||str[i]=='Z')
    {


    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
       {
         vow++;
       }
    else
       {
        con++;
       }
    }
  else if(str[i]>=48&&str[i]<=57)
    {
        num++;
    }


    else if(str[i]==' ')
{
  space++;
}
else
{
    special++;
}
i++;
}
printf("\n %d",vow);
printf("\n %d",con);
printf("\n %d",space);
printf("\n %d",num);
printf("\n %d",special);
}

