#include<iostream>
using namespace std;

main()
{
	int arr[6];
	for(int i=0;i<6;i++)
		cin>>arr[i];
	int bonus;
	cin>>bonus;
	for(int i=1;i<=5;i++)
	{
		int count=0,flag=0,a;
		for(int j=0; j<6;j++)
		{
			cin>>a;
			if(a==bonus)
				flag=1;
			for(int k=0;k<6;k++)
				if(arr[k]==a)
					count++;
		}
		switch(count)
		{
			case 6: cout<<"First Parking slot"<<endl; break;
			case 5: if(flag==1)
					{ cout<<"Second Parking slot"<<endl;}
					else
					{ cout<<"Third Parking slot"<<endl;}
					break;
			case 4: cout<<"Fourth Parking slot"<<endl;break;
			case 3: cout<<"Fifth Parking slot"<<endl;break;
			default: cout<<"No Parking slot"<<endl;
		}
	}
	return 0;
}