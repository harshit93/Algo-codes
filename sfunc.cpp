#include<iostream>
#include<math.h>
using namespace std;

typedef unsigned long long LL;

LL gcd(LL a, LL b)
{
  LL c = a % b;
  while(c != 0)
  {
    a = b;
    b = c;
    c = a % b;
  }
  return b;
}

main()
{
	LL n,k,m;
	cin>>n>>k>>m;
	LL sum=0;
	for(LL i=1;i<n;i++)
	{
		if(gcd(i,n)==1)
			sum+=( LL(pow(i,k)) % m);
	}
	cout<<(sum%m)<<endl;
	return 0;
}
