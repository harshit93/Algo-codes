#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

typedef long long int LL;

main()
{
	int t;
	string freq;
	cin>>t;
	while(t--)
	{
		cin>>freq;
		int index=0,pointer=25;
		//cout<<freq[25];
		string text;
		cin>>text;
		char text2[text.length()][2];
		int text1[26][2];
		/*for(int i=0;i<26;i++)
			text1[i][0]=text1[i][1]=0;*/
		int j=0;
		//Calculating the frequency of each term
		int count=0;
		while(j<text.length())
		{
			text1[text[j]][0]++;
			j++;
			if(text1[text[j]][0]==1)
				count++;
		}int i=0;
		while(count--)
		{
			i=0;
			while(i<26)
			{
				if(text1[i][0]>=text1[index][0] && text1[i][1]!=1)
					index=i;
				i++;
			}
			text1[index][1]=1;i=0;
			while(i<text.length())
			{
				if(text[i]==(char)(index+97))
					text2[i][0]=freq[pointer];
					text2[i][1]=1;
				i++;
			}
			pointer--;
		}
		i=0;
		while(i<text.length())
		{
			if(text2[i][1]!=1)
				text2[i][0]=text[i];
			i++;
		}
		cout<<text2<<endl;
	}
}
