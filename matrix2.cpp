#include<iostream>
using namespace std;

main()
{
    int n,m,count=0;
    cin>>n>>m;
    int arr[n][m];
    for(int a=0;a<n;a++)
    {
        for(int b=0;b<m;b++)
        {
            cin>>arr[a][b];
            if(arr[a][b]==1)
                count++;
        }
    }

}
