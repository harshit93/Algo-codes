#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int sum=0;
		while(n>=1)
		{
			n=n/5;
			sum=sum+(int)n;
		}
		cout<<sum<<endl;
	}
	return 0;
}
