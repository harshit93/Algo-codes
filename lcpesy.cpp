#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char a[10009];
		char b[10009];
		cin>>a>>b;
		int count=0;
		for(int i=0;i<strlen(a);i++)
		{
			for(int j=0;j<strlen(b);j++)
			{
				if(b[j]!='0' && a[i]==b[j])
				{
					//cout<<a[i]<<"  "<<b[j]<<endl;
					count++;
					b[j]='0';
					break;
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
