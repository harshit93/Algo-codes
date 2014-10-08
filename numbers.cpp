#include<iostream>
using namespace std;

main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;
		char name[n][10];
		char *ans;
		int flag=0;
		unsigned long long int a[n],min=999999999;
		for(int i=0;i<n;i++)
		{
			cin>>name[i]>>a[i];
		/*	if(min>a[i])
			{
				min=a[i];
				ans=name[i];
				flag=0;
			}
			else if(min==a[i])
				flag=1;
*/
		}
		int index=n+1;
		/*if(flag==1)
		{*/
			for(int i=0;i<n;i++)
			{	int flag1=0;
				for(int j=0;j<n;j++)
				{
					if(a[i]==a[j] && i!=j)
						flag1=1;
				}
				if(flag1==0)
				{
					if(a[i]<min)
					{
						min=a[i];
						index=i;
						//cout<<name[i]<<endl;
					}
				}
			}
		//}
		//cout<<ans<<min;
		//if(flag==0)
		//	cout<<*(ans)<<endl;
		if(index<n)
			cout<<name[index]<<endl;
		else
			cout<<"Nobody wins."<<endl;

	}
	return 0;
}
