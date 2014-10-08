#include<iostream>
#include<math.h>
//#include<string.h>
using namespace std;


long long int fast_exp(int base, unsigned long long int exp)
{
    if(exp==1)
    return base;
    else
    {
        if(exp%2 == 0)
        {
            long long int base1 = pow(fast_exp(base, exp/2),2);
            if(base1 >= 1000000007)
            return base1%1000000007;
            else
            return base1;
        }
        else
        {
            long long int ans = (base*  pow(fast_exp(base,(exp-1)/2),2));
            if(ans >= 1000000007)
            return ans%1000000007;
            else
            return ans;
        }
    }
}

unsigned long long int tobin(long long int x)
{
    //string str="";
    int k;
    unsigned long long int i=1,sum=0;
    do
    {
        k=x%2;
        sum=sum + (i*k);
        x=x/2;
        i=i*10;
    }while(x>0);
    /*while(x!=0)
    {
        k=x%2;
        x=x/2;
        if(k==1) str="1"+str;
        if(k==0) str="0"+str;
    }*/
    //cout<<sum;
    return sum;
}

main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        unsigned long long int val=tobin(n);
        long long int final=fast_exp(2,val);
        final=pow(final,2);
        long long int final1=final%1000000007;
        cout<<final1<<endl;

    }
    return 0;
}
