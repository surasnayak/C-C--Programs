#include <bits/stdc++.h>
using namespace std;

long long int mincoins(int coin[], int n, int v)
{
	if(v == 0)
	{
		return 0;
	}
	
	long long int res = 1000000000;
	for(int i=0;i<n;i++)
	{
		if(coin[i] <= v)
		{
			long long int sub_res = mincoins(coin, n, v-coin[i]);
			if(sub_res!=1000000000 && sub_res+1 < res)
			{
				res=sub_res+1;
			}
		}
	}
	return res;
}
int main() {
	int coin[1000];
	int n,v,i;
	long long int max = 1000000000;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&coin[i]);
	}
	scanf("%d",&v);
	if(mincoins(coin,n,v) < max)
	{
		printf("%lld\n",mincoins(coin,n,v));
	}
	else{
		printf("-1\n");
	}
	return 0;
}

/* INPUT FORMAT 

	1. First line contains the number of coins.
	2. Second line contains the values of the n coins.
	3. Third line cotains the value V you want to calculate for.*/