int main(){
int i;
char a[60];
printf("\n Enter Character");scanf("%s",&a);
for(i=0;i<strlen(a);i++)
{
    if(a[i]>='A'&&a[i]<='Z')
    {
    a[i]=a[i]+32;
    }
}
printf("%s",a);
}