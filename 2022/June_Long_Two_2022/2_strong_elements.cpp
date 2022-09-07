
// https://www.codechef.com/JUNE222B/problems/STRNG

#include <bits/stdc++.h>
#include<ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/assoc_container.hpp>


using namespace std;
using namespace __gnu_pbds ;
typedef  long long ll1d;


int gcd(int a , int b)
{
  if(b==0)
    return a ;
  if(b>a)
    return gcd(b,a) ;
  return gcd(b,a%b);
}



int main(int argc, char const *argv[])
{

  int t , n ;
  cin>>t ;
  while(t--)
  {
    cin>>n ;
    vector<int>array(n,0);
    for (int i1 = 0; i1 < n; i1++)
        cin>>array[i1];


    vector<int>one_side_gcd_array(n,0);
    one_side_gcd_array[0] = array[0] ;
    for (int i1 = 1; i1 < n; i1++)
      one_side_gcd_array[i1] = gcd(one_side_gcd_array[i1-1],array[i1]);
//n logn

    vector<int>other_side_gcd_array(n,0);
    other_side_gcd_array[n-1] = array[n-1] ;
    for (int i1 = n-2; i1 >=0; i1--)
      other_side_gcd_array[i1] = gcd(other_side_gcd_array[i1+1],array[i1]);


      int cuntr1 =0 ;
      for(int i1=0;i1<n;i1++)
        if((i1==0 && other_side_gcd_array[1]>1) || (i1==n-1 && one_side_gcd_array[n-2]>1) || (gcd(one_side_gcd_array[i1-1] , other_side_gcd_array[i1+1] )>1) )
          cuntr1++;

    cout<<cuntr1<<endl ;

  }

  // cout<<endl<<gcd(12,3);

  return 0;
}
