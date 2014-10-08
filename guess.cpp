#include <iostream>
using namespace std;

typedef long long int LL;

LL GCD (LL a, LL b)
{
	/*if(b==0)
		return a;
	else
		return GCD(b,a%b);*/
	while(b) b ^= a ^= b ^= a %= b;
    return a;
}

main()
{
	LL t;
	cin>>t;
	while(t--)
	{
		LL n,m,total=0;
		cin>>n>>m;
		total = ((n+1)/2)*(m/2) + (n/2)*((m+1)/2);
		/*if(n%2==0)
		{
			if(m%2==0)
				total= (n*m)/4;
			else
				total= ((n/2)*((m/2)+1)) + ((n/2)*(m/2));
		}
		else
		{
			if(m%2==0)
				total= (((n/2)+1)*(m/2)) + ((n*m)/4);
			else
				total= (((n/2)+1)*(m/2)) + ((n/2)*((m/2)+1));
		}*/
		//cout<<total<<endl;
		LL den=n*m;
		LL hcf=GCD(total,den);
		cout<<hcf<<endl;
		cout<<total/hcf<<"/"<<den/hcf<<endl;
	}
}
