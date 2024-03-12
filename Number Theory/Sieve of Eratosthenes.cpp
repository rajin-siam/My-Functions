#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int mx = 1e8;
bitset<mx>isPrime;
vector<ll>primes;
void primeGen(ll n)
{
    for(ll i=2;i<=n;i+=2)isPrime[i]=1;
    ll sq=sqrt(n);
    for(ll i=3;i<=sq;i+=2)
    {
        if(isPrime[i])
        {
            for(ll j=i*i;j<=n;j+=i)
            {
                isPrime[j]=0;
            }
            
        }
    }
    primes.push_back(2);
 
    for ( int i = 3; i <= n; i += 2 ) {
        if(isPrime[i] == 1) {
            primes.push_back(i);
        }
    }
    
}
