#include <stdio.h>

int max(int a, int b){
  return (a>b) ? a:b;
}

int maxSumTwoNoOverlap(int *arr, int n, int l, int r){
  /* creating prefix sum array from existing array */
  for(int i=1; i<n; i++)
    arr[i] += arr[i-1];
  
  //initialize current values
  int res = arr[l+r-1];
  int lmax = arr[l-1];
  int rmax = arr[r-1];
  
  /* Running loop for traversing all the windows and 
    taking max values of left right and result */
  for(int i = l+r; i<n; i++){
    
    lmax = max(lmax, arr[i-r] - arr[i-r-l]);
    res = max(res, arr[i] - arr[i-r] + lmax);
    
    rmax = max(rmax, arr[i-l] - arr[i-r-l]);
    res = max(res, arr[i] - arr[i-l] + rmax);
  }
  return res;
}

int main()
{
  int t; scanf("%d", &t);
  while(t--){
    int n; scanf("%d", &n);
    int arr[n]; 
    for(int i=0; i<n; i++)
      scanf("%d", &arr[i]);
    int l, r; scanf("%d %d", &l , &r);
    
    printf("%d\n", maxSumTwoNoOverlap(arr, n, l, r));
  }
  return 0;
}