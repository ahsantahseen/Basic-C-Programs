int main()
{

int i=0,t,num,pos=0,neg=0,zero=0;
printf("\n ENTER HOW MANY TIMES:");scanf("%d",&t);
while(i<=t)
{
    printf("\n ENTER Number:");scanf("%d",&num);
  if(num>0)
  {
      pos++;
  }
  else if(num<0)
  {
     neg++;

  }
  else
  {
      zero++;
  }
i++;
}
printf("\n %d pos",pos);
printf("\n %d neg",neg);
printf("\n %d zero",zero);
}