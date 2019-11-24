int main()
{
int marks[5];
int sum=0,avg=0,i,j;
for(i=0;i<=5;i++)
{
    printf("\n ENTER MARK OF SUBJECT %d;",i);scanf("%d",&marks[i]);

}
for(j=0;j<=5;j++)
{
    sum=sum+marks[j];
}
printf("THE SUM IS %d",sum);
avg=sum/5;
printf("\n THE AVERAGE IS %d",avg);
}