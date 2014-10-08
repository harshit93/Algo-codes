#include<stdio.h>
#include<math.h>
unsigned long long int fast_exp(int base, int exp) {
    unsigned long long int res=1;
    while(exp>0) {
       if(exp%2==1) res=(res*base)%1000000007;
       base=(base*base)%1000000007;
       exp/=2;
    }
    return res%1000000007;
}
main()
{ int n,t;
 unsigned long long int sum;


  scanf("%d",&t);
  while(t--)
  {
    scanf("%d",&n);

   sum=fast_exp(2,n);

    printf("%ull\n",(sum-1));
  }
  return 0;
}
