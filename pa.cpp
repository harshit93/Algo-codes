#include<iostream>
#include<string>
//#include<cstdio>

using namespace std;

main()
{
	string ch;
	getline(cin,ch);
	while(ch[0]!='#')
	{
	    int i=0;
	    //i=sizeof(ch)/sizeof(ch[0]);
		i=ch.length();
		//cout<<ch[0]<<ch[1]<<ch[2]<<ch[5]<<ch[6]<<endl;
	    //i=ch.length();
		i--;
		//cout<<ch[i]<<endl;
		if(ch[i]=='e')
		{
			int j=0,count=0;
			while(j<ch.length())
			{
				if(ch[j]=='1')
					count++;
				if(ch[j]=='e')
				{
					if(count%2==0)
						ch[j]='0';
					else
						ch[j]='1';
				}
                j++;
			}
		}
		if(ch[i]=='o')
		{
			int j=0,count=0;
			while(j<ch.length())
			{
				if(ch[j]=='1')
					count++;
				if(ch[j]=='o')
				{
					//cout<<count<<endl;
					if((count%2)>0)
						ch[j]='0';
					else
						ch[j]='1';
				}
				j++;
			}
		}
		cout<<ch<<endl;
		cin>>ch;
	}
	return 0;
}
