#include<iostream>
#include<string>
using namespace std;
int m[100];

void message(int index)
{
	if(index>4)
	{
		int i=4;
		int pp=0;
		int p=i;
		int sum=0;
		while(i>=0)
		{
			if(bin[i]==1)
				sum+=pow(2,pp);
			i--;
			pp++;
		}
	}
}

main()
{
	int index=0;
	while(1)
	{
		string str;
		getline(cin,str);
		if(str=="*")
		{
			message(index);
			index=0;
			continue;
		}
		if(str=="#")
			exit(0);
		int i=0;
		while(i<str.length())
		{
			if(str[i]==' ')
				count++;
			else
			{
				if(count>0)
				{
					if(count%2>0)
						bin[index]=0;
					else
						bin[index]=1;
					index++;
				}
				count=0;
			}
			i++;
		}
	}
	return 0;
}