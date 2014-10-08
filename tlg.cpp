#include<iostream>
#include<cmath>
using namespace std;

main()
{
	int n;
	cin>>n;
	int lead=0;
	int winner=0;
	int a0=0,b0=0;
	int diff=0;
	int a,b;
	while(n--)
	{
		cin>>a>>b;
		a=a+a0;
		b=b+b0;
		diff=a-b;
		diff=abs(diff);
		if(diff>lead)
		{
			lead=diff;
			winner=a>b;
		}
		/*
		if(a>b)
		{
			if((a-b)>=lead)
			{
				lead=a-b;
				winner=1;
			}
		}
		else
		{
			if((b-a)>=lead)
			{
				lead=b-a;
				winner=2;
			}
		}*/
		a0=a;
		b0=b;
	}
	cout<<(winner?1:2)<<" "<<lead<<endl;
	return 0;
}
