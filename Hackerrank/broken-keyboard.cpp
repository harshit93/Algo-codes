#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;

typedef unsigned long long int LL;

main()
{
	LL t;
	cin>>t;
	//int repeat[26];
	while(t--)
	{
		char broken[26];
		char word[104];
		int letters[26];
		//memset(word,'A',104);
		//memset(letters,0,26);
		for(int i=0;i<26;i++)
		{
			letters[i]=0;
			broken[i]='A';
			//cout<<broken[i]<<endl;
		}
		//memset(repeat,0,26);
		cin>>broken;
		//cout<<broken<<strlen(broken)<<endl;;
		int temp;
		for(int i=0;i<strlen(broken);i++)
		{
			temp = broken[i];
			letters[temp-97]++;
		}
			//cout<<letters[temp-97]<<endl;}

		cin>>word;
		//int sub=0;
		//for(int i=0;i<strlen(word);i++)
		//{
		//	repeat[(int)(word[i]-97)]++;
		//	if(repeat[(int)(word[i]-97)]>1)
		//		sub++;// repeat[(int)(word[i]-97)] - 1;
		//		//cout<<repeat[(int)(word[i]-97)]<<endl; }
		//}
		//cout<<sub<<endl;
		int count=0;
		temp=0;
		for(int i=0;i<strlen(word);i++)
		{
			temp = word[i];
			if(letters[temp-97]>0)
			{
				count++;
				letters[temp-97]=0;
			}
		}
		cout<<count<<endl;
	}
}