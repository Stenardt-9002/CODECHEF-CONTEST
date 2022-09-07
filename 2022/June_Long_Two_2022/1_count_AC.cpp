
// https://www.codechef.com/JUNE222B/problems/ACS

#include <bits/stdc++.h>
#include<ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/assoc_container.hpp>


using namespace std;
using namespace __gnu_pbds ;
typedef  long long ll1d;


int main(int argc, char const *argv[])
{

  int t , p ;
  cin>>t ;
  while(t--)
  {
    cin>>p ;
    int num = p/100 ;
    int left_score = p%100 ;
    if(num+left_score>10)
      cout<<-1<<endl;
    else
      cout<< num+left_score<<endl ;

  }

  return 0;
}
