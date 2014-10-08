#include<iostream>
#include<algorithm>
using namespace std;

typedef long long int LL;
main()
{
	int arr[26][30];
	for(int x=0;x<26;x++)
		for(int y=0;y<30;y++)
			arr[x][y]=0;
	char str[30];
	LL n;
	cin>>n;
	LL count=0;
	while(n--)
	{
		cin>>str;
		int i=0;
		while(str[i]!='\0')
		{
			if(arr[((int)str[i]-97)][(i-1)]==0)
			{
				arr[((int)str[i]-97)][(i-1)]=1;
				count++;
			}
			i++;
		}
	}
	cout<<(count+1)<<endl;
	return 0;
}