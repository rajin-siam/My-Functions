int sum_of_digits(int n)
{
  int vagfol,vagses;
  vagfol=n;
  int sum=0;
  while(vagfol!=0)
  {
    vagses=vagfol%10;
    sum+=vagses;
    vagfol/=10;
  }
  return sum;
  
}
