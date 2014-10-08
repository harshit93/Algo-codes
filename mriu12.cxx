#include<iostream>
#include<string>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		string str;
		int count=0;
		cin>>n;
		for(int i=1;i<=10;i++)
		{
			int a=n%10;
			n=n/10;
			switch(a)
			{
				case 0: str.insert(0,"-----");
						break;
				case 1: str.insert(0,".----");
						count++;
						break;
				case 2: str.insert(0,"..---");
						count+=2;
						break;
				case 3: str.insert(0,"...--");
						count+=3;
						break;
				case 4: str.insert(0,"....-");
						count+=4;
						break;
				case 5: str.insert(0,".....");
						count+=5;
						break;
				case 6: str.insert(0,"-....");
						count+=4;
						break;
				case 7: str.insert(0,"--...");
						count+=3;
						break;
				case 8: str.insert(0,"---..");
						count+=2;
						break;
				case 9: str.insert(0,"----.");
						count+=1;
						break;
			}
		}
		cout<<str<<endl<<count<<endl;
	}
}
