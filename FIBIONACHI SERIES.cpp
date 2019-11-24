int main(){
int i,num,a=0,b=1,c=0;
  printf("\n ENTER HOW MANY NUMBERS OF SERIES YOU WANT:");
  scanf("%d",&num);
  for(i=0;i<=num;i++)
  {
      printf("\n %d",c);
      a=b;
      b=c;
      c=a+b;
  }
}