#include<iostream>
#include<math.h>
#define MOD 1000000007
using namespace std;

long long int fast_exp(int base, int exp)
{
    long long res=1;
    while(exp>0) {
       if(exp%2==1) res=(res*base)%MOD;
       base=(base*base)%MOD;
       exp/=2;
    }
    return res;
}

main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int a=fast_exp(2,n);
		cout<<(a-1)<<endl;
	}
	return 0;
}
