#include <iostream>
#include <algorithm>
using namespace std;
int main()
{ int n;
cin>>n;
while(n>0)
{
    string t;
    cin >> t;
    cout << min(2*(int)count(t.begin(),t.end(),'a')-1,(int)t.size());
  cout<<"\n";
  n--;
}
return 0;
}
