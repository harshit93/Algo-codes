#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char a,b;
		int aflag=0,bflag=0;
		cin>>a>>b;
		int cost=0;
		if(a=='Q' || a=='J' || a=='K')
		{
			cost=cost+10;
			aflag=1;
		}
		if(b=='Q' || b=='J' || b=='K')
		{
			cost=cost+10;
			bflag=1;
		}
		if((int)a>=50 && (int)a<=57)
		{
			cost=cost+((int)a-48);
			aflag=1;
		}
		if((int)b>=50 && (int)b<=57)
		{
			cost=cost+((int)b-48);
			bflag=1;
		}
		if((cost<=11 || a=='A' || b=='A') && (aflag==1 && bflag==1))
			cout<<"HIT"<<endl;
		else if((cost>11 && aflag==1 && bflag==1) || (a=='A' && b=='A'))
			cout<<"STAND"<<endl;
		else
			cout<<"INVALID"<<endl;
	}
}