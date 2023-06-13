#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;cin>>t;
  while(t--)
  {
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];
    int largest = arr[n-1];
    cout<<arr[n-1]<<" ";
    for(int i=n-2;i>=0;i--)
    {
      if(arr[i]>=largest)
      {
        largest = arr[i];
        cout<<arr[i]<<" ";
      }
    }
    cout<<"\n";
  }
  return 0;
}