// https://www.codechef.com/submit/DISKMOV


// https://www.codechef.com/START60B/problems/DISKMOV



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


ll solve(vector<ll> s1 , ll n ,ll k)
{
    ll ans1 = 0, cur_ans1 = 0,  max_val = 0, i1 =  0;
    ll origk = k ;
    for (i1 = 0; i1 < n; i1++)
        if(s1[i1]==1)
            max_val = max(max_val , i1+1);
        else if(s1[i1]>=2)
            max_val = max(max_val , i1+1+n);

    i1 = 0;
    while(k)
    {

        if(i1<n&&(s1[i1]==0||s1[i1]==2))//not present 
        {
            ans1+=max(0ll,(max_val-(i1+1))) ;
            k-- ;
        }

        else if(i1>=n&&(s1[i1-n]==0)||(s1[i1-n]==1))
        {
            ans1+=max(0ll,(max_val-(i1+1))) ;
            k-- ; 
        }

        i1++ ;
    }
    k = origk-1 ;
    while(k)
    {
        if(s1[n-1]<2)
        s1[n-1]+=2 ;
        if(i1<n&&(s1[i1]==0||s1[i1]==2))//not present 
        {
            cur_ans1+=(2*n-(i1+1)) ;
            k-- ;
        }

        else if(i1>=n&&(s1[i1-n]==0)||(s1[i1-n]==1))
        {
            cur_ans1+=(2*n-(i1+1)) ;
            k-- ; 
        }

        i1++ ;
    }
    ans1 = max(ans1,cur_ans1);

    return ans1 ;
}

int main() 
{
	int t;
	cin >> t;
	while(t--) 
    {
	    int n, k;
	    cin >> n >> k;
	    ll ans1 = 0, ans2 = 0;
        vector<int>a(n);
	    for(int i = 0; i < n; i++) cin >> a[i];
	    sort(a.begin(), a.end());
	    vector<int> missing;
	    int now = 0;
	    for(int i = 1; i <= 2*n; i++) {
	        if(a[now] == i) now++;
	        else missing.push_back(i);
	    }
	    for(int i = 0 ; i < k ; i++) ans1 += max(0, a[n - 1] - missing[i]);
	    for(int i = 0 ; i < k - 1 ; i++) ans2 += max(0, 2*n - missing[i]);
	    cout << max(ans1, ans2) << "\n";
	}
	return 0;
}
// int main(int argc, char const *argv[])
// {
//     fastIO
//     #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     freopen("output1.txt","w",stdout);
//     #endif 
//     ll testcases=1 ;
//     cin>>testcases;
//     // cout<<"DEBUG "<<testcases;
//     while (testcases--)
//     {
//         ll n,k,temp1 ;
//         cin>>n>>k ;
//         // set<ll> s1 ;
//         vector<ll> array1(n,0) ;
//         ll input ; 

//         for (ll i1 = 0; i1 < n; i1++)
//         {
//             cin>>input;
//             if(input>n)
//                 array1[input-n-1]+=2;
//             else 
//                 array1[input-1]+=1;
//         }
//         // for (ll i1 = 0; i1 < n; i1++)
//         //     cout<<array1[i1]<<" ";
//         // cout<<endl ;

//         cout<<solve(array1,n ,k)<<endl;;

//     }
    

//     return 0;
// }

