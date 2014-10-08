#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char arr[102];
        cin>>arr;
        int count=0;
        for(int a=0;a<strlen(arr);a++)
        {
            if(arr[a]=='A' || arr[a]=='D' || arr[a]=='O' || arr[a]=='P' || arr[a]=='R' || arr[a]=='Q')
                count++;
            else if(arr[a]=='B')
                count+=2;
        }
        cout<<count<<endl;
    }
    return 0;
}
