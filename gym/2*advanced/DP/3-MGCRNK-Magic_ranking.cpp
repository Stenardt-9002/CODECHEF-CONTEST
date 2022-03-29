
#include <bits/stdc++.h>
#include<ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/assoc_container.hpp>


using namespace std;
using namespace __gnu_pbds ;

typedef  long long ll1d;
using namespace std;


int main(int argc, char const *argv[])
{
  	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);



    ll1d testcase ,n,i1,j1;
  cin>>testcase ;
  while (testcase--)
  {
    cin>>n ;
    vector<vector<double>> inp_u1;
    for (i1 = 0; i1 < n; i1++)
    {
        vector<double> temp1(n,0);
        inp_u1.push_back(temp1);
        for (ll1d j1 = 0; j1 < n; j1++)
          cin>>inp_u1[i1][j1];
          // cin>>temp1[j1];

    }


    for ( i1 = 0; i1 < n; i1++)
    {
      for (j1 = 0; j1 < n; j1++)
      {
        if(i1==0&&j1==0)
          continue ; 

        else if(i1==0)
          inp_u1[i1][j1]+=inp_u1[i1][j1-1];
        
        else if (j1==0)
          inp_u1[i1][j1]+=inp_u1[i1-1][j1];
        else 
          inp_u1[i1][j1]+=max(inp_u1[i1][j1-1],inp_u1[i1-1][j1]);   
      }
      
    }
    double ans1 ;
      if (inp_u1[n-1][n-1]<0)
      cout<<"Bad Judges\n";
      else
      {
          double dis = 2*n-3;
          ans1 = inp_u1[n-1][n-1]/dis ;
          // cout<<ans1<<endl;
          cout << fixed << setprecision(10) << ans1 << '\n';
      }

  }

  return 0;
}











































































































































// ll1d dx[] = {0,1};
// ll1d dy[] = {1,0};

// bool valid1pos(ll1d xcps,ll1d ycps ,ll1d n )
// {
//     return (xcps>=0 && ycps>=0 && xcps<n&&ycps<n);
// }

// double solve1(ll1d xps,ll1d yps , vector<vector<ll1d>> &dp1,ll1d n,vector<vector<ll1d>> inp_u1)
// {
//   if (xps==n-1 && yps==n-1)
//     return 0;

//   if (dp1[xps][yps]!=-1)
//     return dp1[xps][yps];


//   double ans1 = -1e7;

//   for (ll1d i1 = 0; i1 < 2; i1++)
//   {
//       ll1d dx1 = dx[i1]+xps;
//       ll1d dy1 = dy[i1]+yps ;
//       if(valid1pos(dx1,dy1,n))
//         ans1 = max(ans1 ,solve1(dx1,dy1,dp1,n,inp_u1));
//   }

//   if (ans1==-1e7)
//     {
//       ans1 = 0;
//     }

//     ans1+=inp_u1[xps][yps];
//     dp1[xps][yps] = ans1 ;
//     return ans1 ;
// }


// int main(int argc, char const *argv[])
// {
//   ll1d testcase ,n,i1;
//   cin>>testcase ;
//   while (testcase--)
//   {
//     cin>>n ;
//     vector<vector<ll1d>> inp_u1;
//     for (i1 = 0; i1 < n; i1++)
//     {
//         vector<ll1d> temp1(n,0);
//         for (ll1d j1 = 0; j1 < n; j1++)
//           cin>>temp1[j1];

//         inp_u1.push_back(temp1);
//     }



//     vector<vector<ll1d>> dp1;
//     for (i1 = 0; i1 < n; i1++)
//     {
//         vector<ll1d> temp1(n,-1);
//         dp1.push_back(temp1);
//     }
//     // dp1[0][0] = inp_u1[0][0];
//     double ans1 = solve1(0,0,dp1,n,inp_u1);
//     if (ans1<0)
//       cout<<"Bad Judges\n";
//     else
//     {
//         double dis = 2*n-3;
//         ans1/=dis ;
//         cout<<ans1<<endl;
//     }
//   }
//   return 0;
// }


























// //return
