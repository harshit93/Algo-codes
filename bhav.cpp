#include<iostream>
using namespace std;

main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int s,n,c;
		cin>>s>>n>>c;
		if(s>(n+(2*c)))
			cout<<"NO"<<endl;
		else
		{
			int rem=s-n;
			int count=0;
			while(rem>0)
			{
				rem-=2;
				count++;
			}
			cout<<"YES "<<count<<endl;
		}
	}
	return 0;
}