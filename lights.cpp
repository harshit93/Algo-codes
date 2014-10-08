#include<iostream>
#include<cstdio>
using namespace std;

main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,m,k;
		cin>>n>>m>>k;
		char arr[n][m];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>arr[i][j];
			}
		}int count=0,max=-999,index=0;
		while(k--)
		{
			for(int i=0;i<n;i++)
			{
				count=0;
				for(int j=0;j<m;j++)
				{
					if(arr[i][j]=='.')
						count++;
				}
				if(max<count)
				{
					max=count;
					index=i;
				}
			}
			for(int j=0;j<m;j++)
			{
				if(arr[index][j]=='*')
					arr[index][j]='.';
				else
					arr[index][j]='*';
			}
		}count=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(arr[i][j]=='*')
					count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
