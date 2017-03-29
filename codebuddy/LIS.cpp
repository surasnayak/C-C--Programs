#include <bits/stdc++.h>
using namespace std ;
typedef long long int ll;
int store[1004];
int seq(int a[], int n )
{
	int i, j;
	for (i=0;i<n;i++)
	{
		store[i] =1;
	}
	for(i = 1; i < n; i++)
	{
		for(j = 0; j < i; j++)
		{
			if(a[i] > a[j] && store[i] < store[j] +1)
			{
				store[i] = store[j] + 1;
			}
		}
		
	}
	int max = 0; 
		for(i = 0; i < n;i ++)
		{
			if(max < store[i])
			{
				max = store[i];
			}
		}

		return max;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i;
		int a[1005];
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}

		printf("%d\n",seq(a, n));	
	}
}