#include<iostream>
#include<string.h>
using namespace std;
typedef unsigned long long LL;

main()
{
	int n;
	cin>>n;
	char name[n][15];
	LL cost[n+1][n+1];
	for(int i=0;i<n;i++)
	{
		cin>>name[i];
		//cout<<name[i]<<endl;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cin>>cost[i][j];
	}
	int t;
	cin>>t;
	LL sum=0;
	char curr[15];
	int present=0;
	int index=0;
	while(t--)
	{
		cin>>curr;
		//cout<<curr<<endl;
		for(int i=0;i<n;i++)
		{
			//cout<<name[i];
			if(strcmp(name[i],curr)==0)
				index=i;
			/*int flag=0;
			for(int j=0;j<15;j++)
			{
				if(name[i][j]!=curr[j])
					flag=1;
			}
			if(flag==0)
				{index=i;break;}*/
		}
		//cout<<index<<endl;
		sum+=cost[present][index];
		//cout<<sum<<endl;
		//cout<<present<<endl;
		present=index;
	}
	cout<<sum<<endl;
}
