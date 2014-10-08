#include<iostream>
using namespace std;

main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,r,p,q,flag=0,count=0;
		cin>>n>>r;
		/*if(n%2!=0)
		{
			n++;
			flag=1;
		}*/
		int arr[n+1];
		for(int i=0;i<r;i++)
		{
			cin>>p>>q;
			if(arr[p]!=1 && arr[q]!=1)
			{
				arr[p]=1;
				arr[q]=1;
				count+=2;
			}
		}
		for(int i=1;i<=n;i++)
		{
			//cout<<i<<' '<<arr[i];
			if(arr[i]!=1)
			{
				//cout<<"M inside!";
				count+=2;
				break;
			}
		}
		/*if(flag==1)
			count+=2;
		flag=0;*/
		cout<<count<<endl;
		count=0;
	}
	return 0;
}
