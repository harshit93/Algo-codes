#include<iostream>
#include<math.h>
using namespace std;
typedef unsigned long long int LL;

main()
{
	int t;
	cin>>t;
	while(t--)
	{
		LL a,b;
		cin>>a>>b;
		//cout<<a<<endl;
		LL newLowerRange=sqrt(a);
		LL newUpperRange=sqrt(b);
		LL i=newLowerRange;
		int count=0;
		while(i<=newUpperRange)
		{
			LL j=pow(i,2);
			//cout<<j<<endl;
			i++;
			if(j>=a && j<=b)
			{
				int flag=0;
				int k;
				while(j!=NULL)
				{
					k=j%10;
					//cout<<">"<<k<<endl;
					if(k!=0 && k!=1 && k!=4 && k!=9)
						{flag=1;}//cout<<j<<endl;}
					j=j/10;
					//else count++;
				}
				//cout<<flag<<endl;
				if(flag==0) count++;
				flag=0;
			}
		}
		cout<<count<<endl;
	}
}
