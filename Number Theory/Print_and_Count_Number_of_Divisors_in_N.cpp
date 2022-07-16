set <ll>s;
ll countDivisors(ll n)
{
  int cnt=0;
  for(ll i=0;i*i<=n;i++)
  {
    if(n%i==0)
    {
      ll x=i;
      ll y=n/i;
      s.insert(x);
      s.insert(y);
    }
  }
  cnt=s.size();
  return cnt;
  //.................................

  //Where set Size is Number OF Divisors
  // And set elements are Divisors;
}
