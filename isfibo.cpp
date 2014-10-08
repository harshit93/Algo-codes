	#include <cmath>
	#include <cstdio>
	#include <vector>
	#include <iostream>
	#include <algorithm>
	using namespace std;
	typedef unsigned long long LL;
	int arr[100000000];

	int binarySearch(int arr[], int value, int left, int right) {
	      while (left <= right) {
	            int middle = (left + right) / 2;
	            if (arr[middle] == value)
	                  return middle;
	            else if (arr[middle] > value)
	                  right = middle - 1;
	            else
	                  left = middle + 1;
	      }
	      return -1;
	}

	int main() {
	    LL a=-1;
		LL b=1;
		LL c=a+b;
		for(LL i=0;i<10000000;i++)
		{
			arr[i]=c;
			a=b;
			b=c;
			c=a+b;
		}
	    int t;
	    cin>>t;
		while(t--)
		{
			LL n;
			cin>>n;
			int ans;
			ans=binarySearch(arr,n,0,99999999);
			if(ans==1)
				cout<<"IsFibo"<<endl;
			else
				cout<<"IsNotFibo"<<endl;
		}
	    return 0;
	}
