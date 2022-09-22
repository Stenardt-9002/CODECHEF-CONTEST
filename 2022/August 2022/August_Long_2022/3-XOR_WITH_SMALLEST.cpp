

#include "bits/stdc++.h"
// #pragma GCC optimize("O3,unroll-loops")
// #pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
using namespace std;
using ll = long long int;
mt19937_64 rng(chrono::high_resolution_clock::now().time_since_epoch().count());

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);

	int t; cin >> t;
	while (t--) {
		int n, x, y; cin >> n >> x >> y;
		multiset<int> s;
		for (int i = 0; i < n; ++i) {
			int a; cin >> a;
			assert(a < (1 << 30));
			s.insert(a);
		}
		while (y > 0) {
			int u = *s.begin();
			int v = u^x;
			if (v < u) break;
			--y;
			s.erase(s.begin());
			s.insert(v);
		}
		if (y%2 == 1) {
			int u = *s.begin();
			int v = u^x;
			s.erase(s.find(u));
			s.insert(v);
		}
		for (int u : s) cout << u << ' ';
		cout << '\n';
	}
}



// https://www.codechef.com/AUG221B/problems/SMALLXOR











#include <bits/stdc++.h>
#include<ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/assoc_container.hpp>


using namespace std;
using namespace __gnu_pbds ;
typedef  long long int ll;
#define DEBUG_var 1
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);



typedef vector<int> vi ;
typedef vector<vi> vii ;



typedef vector<ll> vl ;
typedef vector<vl> vll ;

const int mod1 = (1e9+7);
const long long int mod2 =  1e18 ;
#define mii map<int,int> 
#define msi map<string,int> 
#define musi unordered_map<string,int> 




int main(int argc, char const *argv[])
{
    fastIO

    #ifndef ONLINE_JUDGE
    freopen("input1.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 


    int testcase ;
    ll n1,y1,x1 ;//, target;
    // testcase=2 ;
    cin>>testcase;
    while (testcase--)
    {
        cin>>n1>>y1>>x1;
        
        vector<ll> input1(n1,0) ;
        for(ll i1 = 0 ; i1< n1 ; i1++)
            cin>> input1[i1];//,heap1.insert(input1[i1]) ;
        if(n1==1)
        {
            if(x1%2==0)
                cout<<input1[0]<<endl;
            else 
                cout<<(input1[0]^y1)<<endl;

        }
        else 
        {
            // vector<ll> xoroperated(n1,0);
            // for(ll i1 = 0 ; i1< n1 ; i1++)
            //     cin>> input1[i1],xoroperated[i1] = input1[i1]^y1 ;
            multiset<ll> heap1(input1.begin(),input1.end());
            bool break_flag = true ;
            for (ll times = 0; times < x1 && break_flag; times++)
            {
                ll data = *(heap1.begin());
                heap1.erase(data);
                ll data1 = data ^ y1 ;
                heap1.insert(data1);
                
                ll data2 = *(heap1.begin());
                heap1.erase(data2);
                if(data2==data1)
                {
                    if((x1-times-1)%2==0)
                        heap1.insert(data2);
                    else 
                        heap1.insert(data);

                    break_flag=false ;
                }
                else 
                    heap1.insert(data2);
            }
            // vector<int> ans1 ;
            
            for(auto x : heap1 )
                cout<<x<<" ";

            cout<<endl ;
        }
        

    }
    return 0 ;
}






