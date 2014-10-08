#include<iostream>
#include<algorithm>
using namespace std;
typedef unsigned long long LL;

main()
{
	LL n,x;
	cin>>n>>x;
	LL arr[n+10];
	for(LL i=0;i<n;i++)
		cin>>arr[i];
	//cout<<"taken"<<endl;
	sort(arr,arr+n);

	LL failed=n;
	LL done=0;
	LL j=0;
	LL sum=0;
	LL index=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+arr[i];
		if(sum<=x)
			index=i;
		else
			break;
	}
	x=x-sum;
	done=index+1;
	failed=n-index;
	for(LL i=(index+1);i<n;i++)
	{
		if(x>=((arr[i]/2)+1))
		{
			x=x-((arr[i]/2)+1);
			failed--;
		}
	}
	failed--;
	/*
	while(x!=0)
	{
		//sort(arr,arr+n);
		//cout<<"sorted"<<endl;
		//cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
		for(LL i=0;i<n;i++)
		{
			if(x>=((arr[i]/2)+1) && arr[i]!=0)
			{
			    //cout<<((arr[i]/2)+1)<<endl;
				x=x-((arr[i]/2)+1);
				arr[i]=arr[i]-((arr[i]/2)+1);
				//cout<<arr[i]<<endl;

				//cout<<x<<endl;
				if(arr[i]==0)
					done++;
				if(j==0)
					failed--;

			}
			if(x==0)
				break;
		}
		if(x==0)
            break;
		j=1;
	}*/
	cout<<failed<<" "<<done<<endl;
	return 0;
}
