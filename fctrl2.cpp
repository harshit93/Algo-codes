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
		int arr[200];
		int m=n;
		int no=0;
		int i=0;
		while(m!=0)
		{
			arr[i]=m%10;
			i++;
			no++;
			m=m/10;
		}
		for(int j=(n-1);j>=1;j--)
		{
			int temp=0,x=0;
			i=0;
			while(i<no)
			{
				
			}
		}
	}
	return 0;
}
