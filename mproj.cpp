#include<iostream>
using namespace std;

typedef long long int LL;
/*
LL lcm(LL a, LL b)
{
	LL d=a*b;
	LL c;
	if(b>a)
	{
		c=a;
		a=b;
		b=c;
	}
	else
	{
		do{
            c=a%b;
            if(c==0)
                {break;}
            else
            {
                a=b;
                b=c;
            }
		}while(1);
	}
	d=d/b;
	return d;
}*/

LL gcd(LL a, LL b)
{
    while(b) b ^= a ^= b ^= a %= b;
    return a;
}

main()
{
	LL t;
	cin>>t;
	while(t--)
	{
		LL n,minSize,minRipeFactor;
		cin>>n>>minSize>>minRipeFactor;
		LL count=0;
		while(n--)
		{
			LL size,ripeFactor;
			cin>>size>>ripeFactor;
			if(size>minSize)
				count++;
			else if(ripeFactor>minRipeFactor)
				count++;
		}
		LL acut;
		cin>>acut;
		LL division=gcd(count,acut);
		cout<<count/division<<"/"<<acut/division<<endl;
	}
	return 0;
}
