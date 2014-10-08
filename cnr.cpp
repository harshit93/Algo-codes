#include<algorithm>
#include<cstdio>
main()
{
	int t,n,k,m,i,flag=0;
	scanf("%d",&t);
	while(t--)
	{
	    flag=0;
		scanf("%d %d %d",&n,&k,&m);
		char str[n+1];
		for(i=0;i<n-k;i++)
			str[i]='0';
		for(i=n-k;i<n;i++)
			str[i]='1';
		do {
   if(m==1)
{   flag=1;
    for(i=0;i<n;i++)
		printf("%c",str[i]);
	printf("\n");
 }  // std::cout << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';
  } while ( std::next_permutation(str,str+n) && m--);
	if(flag==0)
    {
        printf("-1\n");

    }
	/*for(i=0;i<n;i++)
		printf("%c",str[i]);
	printf("\n");
	}*/}
	return 0;
}
