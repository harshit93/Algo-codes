#include<iostream>
#include<math.h>
using namespace std;

main()
{
	int n,i=1;
	cin>>n;
	int sarea=999999,larea=0;
	int sindex=0,lindex=0;
	while(i<=n)
	{
		int x1,y1,x2,y2,x3,y3;
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		float d1=sqrt((pow((x1-x2),2))+(pow((y1-y2),2)));
		float d2=sqrt((pow((x2-x3),2))+(pow((y2-y3),2)));
		float d3=sqrt((pow((x3-x1),2))+(pow((y3-y1),2)));
		float s=(d1+d2+d3)/2;
		int area=sqrt(s*(s-d1)*(s-d2)*(s-d3));
		if(area>=larea)
		{
			larea=area;
			lindex=i;
		}
		if(area<=sarea)
		{
			sarea=area;
			sindex=i;
		}
		i++;
	}
	cout<<sindex<<" "<<lindex;
	return 0;
}
