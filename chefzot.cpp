#include <iostream>
#include <algorithms>
using namespace std;

typedef unsigned long long int LL;

main()
{
	int n, largest,element;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>element;
		if(element==0)
		{
			if(count>largest)			
				largest=count;
			count=0;
		}
		else
			count++;
	}
	if(largest<count)
		largest=count;
	cout<<largest;
	return 0;
}