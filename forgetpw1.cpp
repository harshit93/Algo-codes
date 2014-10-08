#include <iostream>
#include <cstdio>
#include <cstring>
#include <stdlib.h>
using namespace std;

main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		char arr[500]={0};
		scanf("%d",&n);
		char ele1,ele2;
		for(int i=0; i<n; i++)
		{
			scanf("%c %c",&ele1, &ele2);
			arr[ele1]=ele2;
		}
		char s[1000009];
		scanf("%s",&s);
		int len=strlen(s);
		for(int i=0; i<len; i++)
		{
			if(arr[s[i]]!=0)
				s[i]=arr[s[i]];
		}
		int front = 0;
		int back = len-1;
		int flag=0,flag1=0;
		for(int i=0; i<len; i++)
		{
			if(s[i]!='0' && flag==0)
				{ front=i; flag=1; }
			if(s[back-i]!='0' && flag1==0)
				{ back=back-i; flag1=1; }
		}
		if(s[back]=='.')
		{
			back--;
			if(back < front)
				{ cout<<"0"<<endl; exit(0); }
		}
		flag=0;
		for(int i=front; i<len; i++)
		{
			if(s[i]=='.')
				{ flag=1; break;}
		}
		if(flag==0)
		{
			flag1=0;	
			for(int i=front; i<len; i++)
			{
				if(s[i]!='0')
					{ flag1=1; back=len-1; break;}
			}
			if(flag1==0)
				{ cout<<"0"<<endl; exit(0); }
		}
		for(int i=front; i<=back; i++)
			cout<<s[i];
		cout<<endl;
	}
	return 0;
}