int main()
{

float p_amt,int_rate,yr,obt_amt,interst;
scanf("%f",&p_amt);
scanf("%f",&int_rate);
scanf("%f",&yr);
obt_amt=p_amt*int_rate*yr;
interst=p_amt+obt_amt;
printf("\n %f",obt_amt);
printf("\n %f",interst);
}