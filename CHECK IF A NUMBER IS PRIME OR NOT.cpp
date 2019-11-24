int main(){
int num,n,i,signal=0;
printf("ENTER PRIME NUMBER");scanf("%d",&num);
for(i=2;i<=num/2;i++)
{
    if(num%i==0)
        signal=1;
        break;
}
if(num==1)
{
    printf("1 is neither a prime or composite ");
}
else
 {

    if (signal==0)
    {
        printf("prime");
    }
    else
    {
        printf("not a prime");
    }
}