// https://www.codechef.com/JUNE222B/problems/APGRID



#include <bits/stdc++.h>
#include<ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/assoc_container.hpp>


using namespace std;
using namespace __gnu_pbds ;
typedef  long long ll1d;
//
// int main(int argc, char const *argv[])
// {
//
//   int t , n , m ;
//   cin>>t ;
//   while(t--)
//   {
//     cin>>n>>m ;
//     bool bruh = true ;
//     if(n>m)
//       swap(n,m) , bruh = false;
//     vector<vector<int>> matrix(n,vector<int>(m,0) );
//     int cunt1 = 1 ;
//     for (int i1 = 0; i1 < n; i1++)
//     {
//       matrix[i1][0] = cunt1;
//       for (int j1 = 1; j1 < m; j1++)
//       {
//           matrix[i1][j1] = matrix[i1][j1-1]+cunt1 ;
//       }
//       cunt1+=2 ;
//     }
//     if(bruh)
//     {
//       for (int i1 = 0; i1 < n; i1++)
//       {
//         for (int j1 = 0; j1 < m; j1++)
//             cout<<matrix[i1][j1] <<" ";
//
//         cout<<endl ;
//       }
//     }
//     else
//     for (int i1 = 0; i1 < m; i1++)
//     {
//       for (int j1 = 0; j1 < n; j1++)
//           cout<<matrix[j1][i1] <<" ";
//
//       cout<<endl ;
//     }
//
//
//
//   }
//
//   // cout<<endl<<gcd(12,3);
//
//   return 0;
// }



int main(int argc, char const *argv[])
{

  int t , n , m ;
  cin>>t ;
  while(t--)
  {
    cin>>n>>m ;


    vector<vector<int>> matrix(n,vector<int>(m,0) );
    int cunt1 = 1 ,mul ,cunt2;
    if(n>m)
    {
      cunt1 = 1 ;
      mul = m+1;
      for (int i1 = 0; i1 < n; i1++)
      {
        // matrix[i1][0] = cunt1;
        for (int j1 = 0; j1 < m; j1++)
            matrix[i1][j1] = cunt1+mul*(j1) ;

        cunt1++ ;
        mul++;
      }
    }
    else
    {
      cunt1 = 1 ;
      mul = n+1;
      cunt2 = 1 ;
      for (int i1 = 0; i1 < n; i1++)
      {
        for (int j1 = 0; j1 < m; j1++)
            matrix[i1][j1] = cunt1+cunt2*(j1) ;

        cunt1+=mul ;
        cunt2++;
      }
    }


    // if(bruh)
    // {
      for (int i1 = 0; i1 < n; i1++)
      {
        for (int j1 = 0; j1 < m; j1++)
            cout<<matrix[i1][j1] <<" ";

        cout<<endl ;
      }
    // }
    // else
    // for (int i1 = 0; i1 < m; i1++)
    // {
    //   for (int j1 = 0; j1 < n; j1++)
    //       cout<<matrix[j1][i1] <<" ";
    //
    //   cout<<endl ;
    // }



  }

  // cout<<endl<<gcd(12,3);

  return 0;
}
