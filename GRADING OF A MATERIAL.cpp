int main()
{
int hard,ts;float cc;
printf("\n ENTER HARDNESS OF STEEL:");scanf("%d",&hard);
printf("\n ENTER TENSILE STRENGTH OF STEEL:");scanf("%d",&ts);
printf("\n ENTER CARBON CONTENT STEEL(0.0):");scanf("%f",&cc);
if(hard>50&&cc<0.7&&ts>5600)
{
    printf("\n Grade 10");
}
else if(hard>50&&cc<0.7||ts>5600)
{
    printf("\n Grade 9 ");
}
else if(cc<0.7&&ts>5600||hard>50)
{
    printf("\n Grade 8");
}
else if(hard>50&&ts>5600||cc<0.7)
{
    printf("\n Grade 7");
}
else if(hard>50||cc<0.7||ts>5600)
{
    printf("\n Grade 6");
}
else
{
    printf("\n Grade 5");
}
}