#include<iostream>
using namespace std;

main()
{
    int t;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<t;i++)
    {
        if(arr[i]%2==0)
        {
            cout<<(i+1)<<" "<<"won"<<endl;
        }
        else
        {
            cout<<(i+1)<<" "<<"lost"<<endl;
        }
    }
    return 0;
}
