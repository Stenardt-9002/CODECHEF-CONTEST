// https://www.codechef.com/JUNE222B/problems/REVSORT



#include <bits/stdc++.h>
#include<ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/assoc_container.hpp>


using namespace std;
using namespace __gnu_pbds ;
typedef  long long ll1d;

int main(int argc, char const *argv[])
{

  int t , n , x ;
  cin>>t ;
  while(t--)
  {
    cin>>n>>x ;
    vector<int>array(n,0);
    for (int i1 = 0; i1 < n; i1++)
        cin>>array[i1];

    bool allowed = true ;
    int temp1 ;
    for (int i1 = 1; i1 < n; i1++)
    {
      if(array[i1] <array[i1-1])
        {
          if(array[i1]+array[i1-1]>x)
            allowed = false ;

          temp1 = array[i1];
          array[i1] = array[i1-1];
          array[i1-1] = temp1;
        }
    }
    if(allowed)
      cout<<"YES\n";
    else
      cout<<"NO\n";

  }

  // cout<<endl<<gcd(12,3);

  return 0;
}
