int main(){
int a,b;

for(a=0;a<9;a++)
{
    for(b=0;b<9-a;b++)
    {
        printf(" ");
    }

     for(b=0;b<2*a-1;b++)
     {
         printf("*");
     }
printf("\n ");
}
}