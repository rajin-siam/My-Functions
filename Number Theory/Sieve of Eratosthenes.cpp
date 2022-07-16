void sieve(int n)
{
  int prime[n+3];
  memset(prime,0,sizeof(prime));
  for(ll i=2;i*i<=n;i++)
  {
    if(prime[i]==0)
    {
      for(ll j=i*i;j<=n;j+=i)prime[j]=1;
    }
  }
  for(ll i=2;i<=n;i++)
  {
    if(prime[i]==0)cout<<i<<" ";
  }
  cout<<endl;
}
