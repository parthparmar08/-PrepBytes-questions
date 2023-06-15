include <stdio.h>

int main()
{
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
  int current = 0;
  long long moves = 0;
  for(int i=0;i<n;i++)
  {
      moves += abs(arr[i]-current);
      current = arr[i];
  }
  printf("%lld\n",moves);
  return 0;
}