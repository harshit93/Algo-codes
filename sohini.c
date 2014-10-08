#include<stdio.h>
int main()
{
int i;
int a=5,b=7,c=9;
int *ptr[3]={a,b,c};
int g=67;
int *str=&g;
printf("%d",str);
printf(" %d",&str);
printf(" %d",&g);
for(i=0;i<3;i++) {
//*ptr[i]=1;
printf("%d",ptr[i]);
printf(" %d ",(&ptr[i]));
printf("\n"); }

printf("\n %d", &a);
printf("\n %d", &b);
printf("\n %d", &c);
return 0;
}
