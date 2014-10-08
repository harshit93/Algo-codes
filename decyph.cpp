#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;

main()
{
    char arr[101];
    cin>>arr;
    int i=0;
    while(arr[i]!='\0')
    {
        arr[i]=char(int(arr[i])-7);
        i++;
    }
    cout<<arr;
    return 0;
}
