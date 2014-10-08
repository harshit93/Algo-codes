#include<iostream>
#include<cmath>
using namespace std;

main()
{
    int n;
    cin>>n;
    int arr[n][3];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i][0];
        cin>>arr[i][1];
        cin>>arr[i][2];
    }
    for(int i=0;i<n;i++)
    {
        int a=pow(arr[i][0],2);
        int b=pow(arr[i][1],2);
        int c=pow(arr[i][2],2);
        cout<<a<<b<<c;
        if(((a+b)==c)||((a+c)==b)||((b+c)==a))
        {
            cout<<"RIGHT TRIANGLE"<<endl;
        }
        else
        {
            cout<<"NOT RIGHT TRIANGLE"<<endl;
        }
    }
    return 0;
}
