#include<iostream>
using namespace std;

typedef unsigned long long int LL;
main()
{
	int n,q;
	cin>>n>>q;
	//cout<<n<<q;
	int arr[n];
	LL arr1[n];
	for(int i=0;i<n;i++)
		arr1[i]=0;
	LL prev=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		arr1[i]=prev+arr[i];
		prev=arr1[i];
	}
	//cout<<arr[0]<<arr[1]<<arr[2]<<arr[3]<<arr[4];
	while(q--)
	{
		char ch;
		cin>>ch;
		if(ch=='S')
		{
			int f,l;
			cin>>f>>l;
			LL sum=0;
			/*for(int i=f;i<=l;i++)
				sum=sum+arr[i];*/
			sum=arr1[l]-arr1[f];
			cout<<sum<<endl;
		}
		if(ch=='G')
		{
			int num,f;
			cin>>f>>num;
			arr[f]=arr[f]+num;
			//cout<<arr[f];
		}
		if(ch=='T')
		{
			int num,f;
			cin>>f>>num;
			arr[f]-=num;
		}
	}
	return 0;
}