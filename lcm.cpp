#include<iostream>
using namespace std;

main()
{
	int a,b,d;
	cin>>a>>b;
	d=a*b;
	int c;
	if(b>a)
	{
		c=a;
		a=b;
		b=c;
	}
	else
	{
		do{
            c=a%b;
            if(c==0)
                {break;}
            else
            {
                a=b;
                b=c;
            }
		}while(1);
	}
	d=d/b;
	cout<<d;
	return 0;
}
