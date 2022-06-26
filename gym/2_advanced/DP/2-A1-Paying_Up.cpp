// https://www.codechef.com/problems/A1

//Subset Sum Problem


#include <bits/stdc++.h>
#include<ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/assoc_container.hpp>


using namespace std;
using namespace __gnu_pbds ;

typedef  long long ll1d;



using namespace std;


int solve1(int n,int sum1,vector<int> &a1,vector<vector<int>> dp1)
{
  if(sum1==0)
    return dp1[n][sum1]=1 ;
  if(n==0)
    return dp1[n][sum1]=0 ;
  if(dp1[n][sum1]!=-1)
    return dp1[n][sum1] ;

  if(sum1-a1[n-1]>=0)
    return dp1[n][sum1] = solve1(n-1,sum1,a1,dp1)||solve1(n-1,sum1-a1[n-1],a1,dp1);
  else
    return dp1[n][sum1] = solve1(n-1,sum1,a1,dp1);
}





int main(int argc, char const *argv[])
{

    ll1d testcase ,n,sum1,i1;
    cin>>testcase ;
    while (testcase--)
    {
        cin>>n>>sum1;
        vector<int>ar1 (n,0);

        for (i1 = 0; i1 < n; i1++)
            cin>>ar1[i1];
        vector<vector<int>> dp1 ;
        for (i1 = 0; i1 <=n ; i1++)
        {
              vector<int>temp1(sum1+1,-1);
              dp1.push_back(temp1);
        }
        if (solve1(n,sum1,ar1,dp1))
          cout<<"Yes\n";
        else
          cout<<"No\n";
    }
    return 0;
}










































































//returbn
