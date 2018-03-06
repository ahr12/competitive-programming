#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll nextPowerOf2(ll n)
{
	//finds a number which is greater than or equal to n and is a smallest power of 2
    
    ll p = 1;
    if (n && !(n & (n - 1)))
        return n;
 
    while (p < n) 
        p <<= 1;
     
    return p;
}

int search(ll prev,ll next,ll k,int f)
{
	//search the index using binery search and return 0 or 1 
	 
	ll mid = (prev + next)/2;
	if(mid == k)
		return f;
	if(mid > k)
		return search(prev,mid-1,k,0);
	else
		return search(mid+1,next,k,1);
}
int main()
{
	ll t,test;
	cin >> test;
	for(t = 1; t <=test; t++)
	{
		ll k;
		int ans;
		cin >> k;
		ll next = nextPowerOf2(k);
		ll prev = next/2;
		if (next == k)
		 	ans = 0;
		else
			ans = search(prev+1,next-1,k,1);

		cout << "Case #" << t << ": " << ans << endl;
	
	}
	return 0; 
}

