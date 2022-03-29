
#include <bits/stdc++.h>
#include<ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/assoc_container.hpp>


using namespace std;
using namespace __gnu_pbds ;

typedef  long long ll1d;



using namespace std;

bool valid1pos(int xcps,int ycps ,int n )
{
    return (xcps>=0 && ycps>=0 && xcps<n&&ycps<n);
}
int arr1x[] = {-2,2,1,-1};
int arr1y[] = {1,1,2,2};


ll1d solve1(ll1d x,ll1d y ,vector<vector<ll1d>>&dp1,vector<vector<bool>>&visted1,vector<string>a1,int n)
{
    ll1d ans1 = 0,ans2 = 0,i1;
    if (dp1[x][y]!=-1)
        return dp1[x][y];
    if (visted1[x][y])
        return 0;

    visted1[x][y] = true ;
    if(a1[x][y]=='P')
        ans1++ ;

    for (i1 = 0; i1 < 4; i1++)
        if (valid1pos(x+arr1x[i1],y+arr1y[i1],n))
            ans2 = std::max(ans2 ,solve1(x+arr1x[i1],y+arr1y[i1],dp1,visted1,a1,n));
    // cout<<ans1<<endl;
    ans1+=ans2 ;
    dp1[x][y] = ans1 ;
    return ans1 ;
}

int main(int argc, char const *argv[])
{

    ll1d n,testcase1 ,i1;
    cin>>testcase1;

    while (testcase1--)
    {
        vector<string> a1;
        string tem1 ;
        cin>>n;
        vector<vector<ll1d>>dp1;
        vector<vector<bool>>visted1;
        for (int i1 = 0; i1 < n; i1++)
        {
            vector<ll1d> temn1(n,-1)  ;
            dp1.push_back(temn1);
            vector<bool> temn2(n,false)  ;
            visted1.push_back(temn2);
        }
        
        
        i1=0;
        ll1d xpos,ypos ;
        while (i1<n)
        {
            cin>>tem1;
            a1.push_back(tem1);
            for (ll1d yp = 0;yp <tem1.size() ;++yp )
                if(tem1[yp]=='K')            
                {    
                    xpos = i1 ; ypos = yp;
                }
            i1++;
        }
        // cout<<endl;
        // cout<<xpos<<" "<<ypos;
        cout<<solve1(xpos,ypos,dp1,visted1,a1,n)<<endl;
    }
    return 0;
}




