#include<iostream>
using namespace std;

typedef long long int LL;
main()
{
	LL t;
	cin>>t;
	while(t--)
	{
		LL n;
		cin>>n;
		LL f=1,s=5,next;
		for(int c=0;c<n;c++)
		{
			if(c==0)
				next=f;
			else if(c==1) next=s;
			else
			{
				next=s+(2*f);
				f=s;
				s=next;
			}
		}
		cout<<(next%10000007)<<endl;
	}
	return 0;
}