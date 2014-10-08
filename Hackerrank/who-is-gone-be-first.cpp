#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

main()
{
	string s;
	cin>>s;
	char min = 'z';
	for(int i = 0; i<s.length(); i++)
	{
		if(min>s[i])
			min=s[i];
	}
	if(min>'a')
			cout<<'a'<<endl;
		else
			cout<<'a'<<'a'<<endl;
}