#include <iostream>
#include <cstdio>
using namespace std;

typedef unsigned long long int LL;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int arr[m];
		for (int i=0;i<m;i++)
			cin>>arr[i];
		int count=0;
		for(int i=1;i<=n;i++)
		{
			int flag=0;
			for(int j=0;j<m;j++)
			{
				if(i%arr[j]!=0)
				{
					flag=1;break;
				}
			}
			if(flag==0)
				count++;
		}
		cout<<count<<endl;
	}
	return 0;
}