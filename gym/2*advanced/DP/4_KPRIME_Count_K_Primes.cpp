
// https://www.codechef.com/problems/KPRIME
// https://discuss.codechef.com/t/kprime-editorial/2651

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


    vector<vector<int>> dp1(6,vector<int>(100005,0)) ; // prime numbers
    vector<int> unique_fac(100005,0); //start from 2 
    ll1d testcase ,n,i1,j1;
    
    for  (i1 = 2; i1 < 100005; i1++)
        if(unique_fac[i1]==0)
            for (j1=i1 ;j1<100005;j1+=i1)
                unique_fac[j1]++;
            
    

    // unique_fac[0] = 1;//
    // unique_fac[1] = 1;//
    // unique_fac[2] = 1;//
    // unique_fac[3] = 1;//
    // unique_fac[4] = 1;//

    for(i1=0;i1<100005;i1++)
        if(unique_fac[i1]<=5)
            dp1[unique_fac[i1]][i1]++;

    //O(1) query 
    for (int k1 = 0; k1 < 6; k1++)
        for(i1=1;i1<100005;i1++)
            dp1[k1][i1]+=dp1[k1][i1-1];
    
    
    cin>>testcase ;
    ll1d a1,b1,k;
    while (testcase--)
    {
        
        cin>>a1>>b1>>k ;
        cout<<(dp1[k][b1]-dp1[k][a1-1])<<endl;
        
    }
    return 0;
}
















