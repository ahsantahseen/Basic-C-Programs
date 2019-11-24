int main()
{
int m1=0,m2=0,m3=0,m4=0,m5=0;float tot,per;
printf("\n ENTER SUBJECT 1 MARKS:");scanf("%d",&m1);
printf("\n ENTER SUBJECT 2 MARKS:");scanf("%d",&m2);
printf("\n ENTER SUBJECT 3 MARKS:");scanf("%d",&m3);
printf("\n ENTER SUBJECT 4 MARKS:");scanf("%d",&m4);
printf("\n ENTER SUBJECT 5 MARKS:");scanf("%d",&m5);
tot=(m1+m2+m3+m4+m5);
per=(tot/500)*100;
printf("%f is total /n %f is Percentage ",tot,per);
if(per<=90&&per>=80)
{
    printf("\n First div");
}
else if(per<=80&&per>=70)
{
    printf("\n Second div");
}
else if(per<=60&&per>=70)
{
    printf("\n Third div");
}
else if(per<=50&&per>=40)
{
    printf("\n Fourth div");
}
else
{
    printf("\n WORK Harder");
}
}