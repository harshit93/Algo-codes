#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int x;
	float y;
	cout<<fixed<<setprecision(2);
	cin>>x>>y;
	if(x%5!=0 || x>y)
		cout<<y;
	else
		cout<<(y-x-0.50);
}
