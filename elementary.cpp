#include<iostream>
#include<algorithm>
using namespace std;

typedef long long int LL;
main()
{
  LL n,k,q;
  cin>>n>>k>>q;
  LL arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  LL j;
  while(q--)
  {
    cin>>j;
    //LL m=n-1;
    LL x=arr[((j+k-1)%(n))];
    cout<<x<<endl;
  }
  return 0;
}