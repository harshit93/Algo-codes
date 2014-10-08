#include<iostream>
using namespace std;

main()
{
	int a,b;
	cin>>a>>b;
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
	cout<<b;
	return 0;
}
