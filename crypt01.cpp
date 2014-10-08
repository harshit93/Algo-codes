#include<iostream>
using namespace std;

main()
{
	int t;
	cin>>t;
	for(int x=1;x<=t;x++)
	{
		int n;
		cin>>n;
		int arr[n];
		int totalcost=0,tcfrag=0,flagfrag=0,flagre=0;
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
			int a=arr[i];
			int b=arr[i];
			a++;b++;
			int costfrag=0,costre=0;
			while(a>0)
			{
				a=a-60;
				costfrag=costfrag+15;
			}
			while(b>0)
			{
				b=b-30;
				costre=costre+10;
			}
			if(costfrag<costre)	{
				flagfrag=1;
				totalcost=totalcost+costfrag;
			}
			if(costre<costfrag) {
				flagre=1;
				totalcost=totalcost+costre;
			}
			if(costre==costfrag) {
				flagre=1;
				totalcost=totalcost+costre;
				tcfrag=tcfrag+costfrag;
			}
		}
		cout<<"Case "<<x<<":"<<((flagre)?" Respawn":"")<<((flagfrag)?" Frag":"")<<((totalcost==tcfrag)?" Frag":"")<<" "<<totalcost<<endl;
	}
	return 0;
}