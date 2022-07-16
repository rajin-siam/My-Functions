ll power(ll base, ll mod)
{
  ll result =1;
  while(n)
  {
    if(n%2==1)
    {
      result=(result*base)%mod;
      n--;
    }
    else {
      base=(base*base)%mod;
      n=n/2;
    }
  }
  return result;
}
