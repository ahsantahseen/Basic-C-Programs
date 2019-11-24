##include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  char a[50]="CAPITAL";
  char b[50]="small";
  for(int i=0;i<strlen(a);i++)
  {
      a[i]=a[i]+32;
  }
  for(int j=0;j<strlen(b);j++)
  {
      b[j]=b[j]-32;
  }

puts(a);
puts(b);

}
