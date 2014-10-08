#include<iostream>
using namespace std;

typedef long long int LL;

main()
{
	int n;
	int arr[n][n][11];
	int flag[10];
	for (int i = 0; i < 10; i++)
		flag[i]=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j][0];
			arr[i][j][(arr[i][j][0])]++;
		}
	}
	int q;
	cin>>q;
	while(q--)
	{
		int x1,y1,x2,y2;
		int sum=0;
		cin>>x1>>y1>>x2>>y2;
		x1--;x2--;y1--;y2--;
		for(int i=x1;i<=x2;i++)
		{
			for(int j=1;j<=10;j++)
			{
				if(arr[i][y2][j]-arr[i][y1][j]>0 && flag[j-1]!=1)
					{flag[j-1]=1;
					sum++;}
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}