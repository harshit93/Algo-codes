#include<iostream>
using namespace std;

main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,flag=0;
		cin>>n;
		while(n>1)
		{
			int fac,larfac;
			for(int i=1;i<n;i++)
				if(n%i==0)
					fac=i;
			larfac=n/fac;
			n=n-larfac;
			flag++;
		}
		if(n%2==0)
			cout<<"ALICE"<<endl;
		else
			cout<<"BOB"<<endl;
	}
	return 0;
}
