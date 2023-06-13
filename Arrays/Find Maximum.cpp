#include<bits/stdc++.h>
using namespace std;
#define ll long long
int maximumGap(int arr[],int n) {
    int l[n],r[n];
    l[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        l[i]=min(arr[i],l[i-1]);
    }
    r[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        r[i]=max(arr[i],r[i+1]);
    }
    int i=0,j=0;
    int max_dist = -1;
    while(i<n && j<n)
    {
        if(l[i]<r[j])
        {
            max_dist = max(max_dist,j-i);
            j++;
        }
        else
        {
            i++;
        }
    }
    if(max_dist==-1)
        return -1;
    return max_dist;
}

int main()
{
   int n;cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
      cin>>arr[i];
  cout<<maximumGap(arr,n)<<"\n";

    return 0;
}