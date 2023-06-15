#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;cin>>t;
  while(t--)
  {
    int arr_x[4];
    int arr_y[4];
    for(int i=0;i<4;i++)
    {
      cin>>arr_x[i];
      cin>>arr_y[i];
    } 

    int dist_12 = (arr_x[0]-arr_x[1])*(arr_x[0]-arr_x[1]) + (arr_y[0]-arr_y[1])*(arr_y[0]-arr_y[1]);
    int dist_34 = (arr_x[2]-arr_x[3])*(arr_x[2]-arr_x[3]) + (arr_y[2]-arr_y[3])*(arr_y[2]-arr_y[3]);

    int midx_12 = (arr_x[0]+arr_x[1])/2;
    int midy_12 = (arr_y[0]+arr_y[1])/2;
    int midx_34 = (arr_x[2]+arr_x[3])/2;
    int midy_34 = (arr_y[2]+arr_y[3])/2;
    if(dist_12 == dist_34 && midx_12==midx_34 && midy_12==midy_34)
    {
      cout<<"Yes"<<"\n";
    }
    else
    {
      cout<<"No"<<"\n";
    }
  }

  return 0;
}