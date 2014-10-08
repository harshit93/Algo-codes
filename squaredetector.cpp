#include<iostream>
using namespace std;
#define max 21
char arr[max][max];

int isSquare(int, int, int);
main()
{
	int t;
	int ans;
	cin>>t;
	for(int x=1;x<=t;x++)
	{
		int n;
		cin>>n;
		//char arr[n][n];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
				cin>>arr[i][j];
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(arr[i][j]=='#')
					ans=isSquare(i,j,n);
				if(ans==1)
					break;
			}
			if(ans==1)
				break;
		}
		if(ans==1)
			cout<<"Case #"<<x<<": YES"<<endl;
		else
			cout<<"Case #"<<x<<": NO"<<endl;
	}
}

int isSquare(int a, int b, int x)
{
	int lim=x+2;
	for(int i=b;i<x;i++)
	{
		if(arr[a][i]=='.')
		{
			lim=i;
			break;
		}
	}
	if(lim>x)
		lim=x-1;
	int lim1=lim-b;
	int flag=0;
	for(int i=a;i<x;i++)
	{
		for(int j=b;j<x;j++)
		{
			if(i<lim1 && j<lim)
				if(arr[i][j]=='.')
					flag=1;
			if(i>lim1 || j>lim)
				if(arr[i][j]=='#')
					flag=1;
		}
	}
	if(flag==0)
		return 1;
	else
		return 0;
}
