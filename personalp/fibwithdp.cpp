#include <bits/stdc++.h>
using namespace std ;
typedef long long int ll; 

int fiba[1000];

long long int fib(int n)
{
	if(fiba[n] != -1)
	{
		return fiba[n];
	}
	else
	{
		if (n == 1 || n == 0)
		{ 
			fiba[n] = 1;
			return fiba[n];
		}
		else
		{
			
			fiba[n] =  fib(n-1) + fib(n-2);
			return fiba[n];
		}
	}
	
}

int main()
{
	memset ( fiba, -1, sizeof(fiba));
	int n,i;
	cin >> n;
	printf("%lld\n",fib(n));
}
