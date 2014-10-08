#include<iostream>
using namespace std;

main()
{
	long int t;
	cin>>t;
	while(t--)
	{
        long long int n=0,c=0;
		cin>>n>>c;
		unsigned int ans=n/c;
		if(ans!=0)
			ans--;
		cout<<ans<<endl;
	}
	return 0;
}
