#include<iostream>
using namespace std;
main()
{
    long long int t;
    cin>>t;
    float arr[t];
    for(int a=0;a<t;a++)
    {
        cin>>arr[a];
    }
    long long int sum=0;
    for(int b=0;b<t;b++)
    {
        for(int c=0;c<b;c++)
        {
            sum=sum+(arr[c]&arr[b]);
        }
    }
    cout<<sum;
    return 0;
}
