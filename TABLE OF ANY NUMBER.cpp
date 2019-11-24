int main(){

int i=0,num,sum=0;
printf("\n ENTER ANY NUMBER:");scanf("%d",&num);
while(i<=num)
{
    printf("\n %d*%d=%d",i,i,i*i);
    sum=(i*i)+sum;
    i++;


}
 printf("\n %d",sum);
}