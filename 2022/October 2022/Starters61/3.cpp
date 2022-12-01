#include <bits/stdc++.h>
#include<ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/assoc_container.hpp>


using namespace std;
using namespace __gnu_pbds ;
typedef  long long int ll;
#define DEBUG_var 1
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


const int mod1 = (1e9+7);
const int MOD1 = 1000000007;


// ll solve(ll n,vector<ll>array1)
// {
//     if(n<3)
//         return (n+1)*n/2 ;
    

//     vector<ll> q1 ;
//     ll ans1 = 0;
//     bool strictly_increasing = false ;
//     bool strictly_decreasing = true ;

//     if(array1[0]<array1[1])
//         strictly_increasing = true ;
//     // else if(array1[0]>array1[1]) 
//     //     strictly_decreasing = true ;
//     // else 
//     //     same = true ;
//     q1.push_back(array1[0]);
//     q1.push_back(array1[1]);

//     int i1 = 2 ;
//     int qsize = 2;
//     bool flag_flush = false ;
//     while(i1<n)
//     {

//         if(array1[i1]==q1.back())
//             q1.push_back(array1[i1]);
//         else if(array1[i1]>q1.back()) 
//         {
//             q1.push_back(array1[i1]);
//             strictly_increasing = true ;
//         }
//         else 
//         {
//             if(strictly_increasing)
//                 flag_flush = true ;
//             else 
//                 q1.push_back(array1[i1]);
//         }

//         if(flag_flush)
//         {
//             qsize= q1.size();
//             qsize = (qsize*(qsize+1)/2)-2*qsize+1 ;
//             ans1+=qsize ;
//             q1 = {};
//             q1.push_back(array1[i1-1]);
//             q1.push_back(array1[i1]);

//             strictly_increasing = (array1[i1-1]<array1[i1]);
//             flag_flush = false ;
//         }
//         i1++ ;
//     }
    
//     qsize = q1.size();
//     qsize = (qsize*(qsize+1)/2)-2*qsize+1 ;
//     ans1+=qsize ;
//     return ans1+(n+n-1) ;

// }



ll solve(ll n,vector<ll>array1)
{
    if(n<3)
        return (n+1)*n/2 ;
    

    vector<ll> q1 ;
    ll ans1 = 0;
    ll element1 = array1[0];
    ll element2 = array1[1];

    ll i1 = 2 ;
    ll qsize = 2;
    bool flag_flush = false ;
    while(i1<n)
    {

        if(array1[i1]==element2)
            qsize++ ;
        else if(array1[i1]>element2) 
        {
            element1 = element2 ;
            element2 =array1[i1];
            qsize++ ;
        }
        else 
        {
            if(element1<element2)
                flag_flush = true ;
            else
            {
                element1 = element2 ;
                element2 =array1[i1];
                qsize++ ;
            } 
                // q1.push_back(array1[i1]);
        }

        if(flag_flush)
        {
            qsize= q1.size();
            qsize = (qsize*(qsize+1)/2)-2*qsize+1 ;
            ans1+=qsize ;
            q1 = {};
            q1.push_back(array1[i1-1]);
            q1.push_back(array1[i1]);

            strictly_increasing = (array1[i1-1]<array1[i1]);
            flag_flush = false ;
        }
        i1++ ;
    }
    
    qsize = q1.size();
    qsize = (qsize*(qsize+1)/2)-2*qsize+1 ;
    ans1+=qsize ;
    return ans1+(n+n-1) ;

}

int main(int argc, char const *argv[])
{
    fastIO
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output1.txt","w",stdout);
    #endif 
    int testcases=1 ;
    cin>>testcases;
    while (testcases--)
    {
        ll n;
        cin>>n;
        vector<ll>array1(n);
        for(auto &x:array1)
            cin>>x ;
        cout<<solve(n,array1)<<endl;
        // cout<<*(--s1.end())<<endl;

    }
    

    return 0;
}

