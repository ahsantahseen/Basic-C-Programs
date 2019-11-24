int main(){
int i,end,str;
printf("\n STARTING  NUMBER:");scanf("%d",&str);
printf("\n ENDING NUMBER:");scanf("%d",&end);
for(i=str;i<=end;i++)
{
    printf("\n CUBE= %d*%d*%d=%d",i,i,i,i*i*i);
    printf("\n SQUARE= %d*%d=%d",i,i,i*i);
}
}

