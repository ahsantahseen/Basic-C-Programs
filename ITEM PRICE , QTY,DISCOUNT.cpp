int main()
{
int itm_price,qty;
printf("\n Enter item Price:");scanf("%d",&itm_price);
printf("\n Enter qty:");scanf("%d",&qty);
float total;
total=itm_price*qty;
if(qty>1000)
{
int discount=0;
    discount=total*0.1;
    int final=0;
    final=total-discount;
    printf("\n You have got 10 percent off your discount is %d and your net amount is %d",discount,final);

}
else
{
    printf("\n NO DISCOUNT AND NET AMOUNT %d",total);
}
}