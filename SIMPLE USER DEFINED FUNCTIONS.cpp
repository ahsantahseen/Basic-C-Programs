void add(void);
void sub(void);
void multi(void);
void divi(void);

void add (void)
{
    int a=1,b=1;
    int c=a+b;
    printf("\n the sum is %d",c);


}
void sub (void)
{
    int a=1,b=1;
    int c=a-b;
    printf("\n the subraction is %d",c);
}
void multi(void)
{
    int a=1,b=1;
    int c=a*b;
    printf("\n the multiplication %d",c);
}
void divi(void)
{
    float a=3,b=2;
    float c=a/b;
    printf("\n the division is %0.3f",c);


}
int main() {

add();
sub();
multi();
divi();
}