// https://www.codechef.com/submit/DQUERY


// https://www.codechef.com/START57B/problems/DQUERY




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

const long long int mod2 =  1e18 ;
bool isPrime(int n)
{
  if(n==1||n==0)return false;
    
  for(int i=2; i*i<=n; i++)
    if(n%i==0)return false;
  return true;
}


int main(int argc, char const *argv[])
{
    fastIO

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output1.txt","w",stdout);
    #endif 


    int testcase ;
    
    // testcase=2 ;
    cin>>testcase;
    // set<int> prime_nums = SieveOfEratosthenes(100009);
    while (testcase--)
    {
        int n ,q, p,k ;
        cin>> n ;
        int max_ele = INT_MIN;
        vector<int> input(n);
        for(auto &x : input)
        {
            cin>> x ;
            if(x>max_ele)
                max_ele = x;
        }
        cin>>q ;
        max_ele = sqrt(max_ele);
        set<int> prime_nums;
        for (int i1 = 2; i1 <=max_ele; i1++)
        {
            if(isPrime(i1))
                prime_nums.insert(i1);
        }
        
        
        unordered_map<int , set<pair<int , int>>> mapprimetonumsandindex ;
        unordered_map<int , set<int>> mapprimetoindex ;

        for (int i1 = 0; i1 < input.size(); i1++)
        {
            for(auto pri_n : prime_nums)
                if(input[i1]!=1 && input[i1]%pri_n==0)
                    mapprimetoindex[pri_n].insert(i1),  mapprimetonumsandindex[pri_n].insert({input[i1],i1}) ;
        }
        
        while(q--)
        {
            cin>> p >>k ;
            set<pair<int , int>> s1 = mapprimetonumsandindex[p];
            vector<pair<int,int>> v1(s1.begin(),s1.end()) ;

            ll sum1 = 0 ;
            int found1 = 0;
            for (int i1 = 0; i1 < k; i1++)
            {
                // if(i1 found in v1)
                bool found = false ;
                // for (int j1 = 0; j1 < v1.size() && !found; j1++)
                //     if(v1[j1].second==i1)
                if(mapprimetoindex[p].find(i1)!=mapprimetoindex[p].end())
                    found = true,found1++  ;

                if(!found)
                    sum1+=input[i1];
                else 
                    sum1+=v1[v1.size()-found1].first ;
                
            }
            cout<<sum1<<endl ;
        }        
        
    }
    return 0 ;
}


#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
//#include <sys/resource.h>
#define double long double
#define int long long
#define initrand mt19937 mt_rand(time(0));
#define rand mt_rand()
#define MOD 1000000007
#define INF 1000000000
#define mid(l, u) ((l+u)/2)
#define rchild(i) (i*2 + 2)
#define lchild(i) (i*2 + 1)
#define mp(a, b) make_pair(a, b)
#define lz lazup(l, u, i);
#define ordered_set tree<pair<int, int>, null_type,less<pair<int, int>>, rb_tree_tag,tree_order_statistics_node_update>
using namespace std;
using namespace __gnu_pbds;
bool notPrime[100001];
vector<int> pfac[100001];
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for(int i = 2;i<=100000;i++){
        if(notPrime[i]) continue;
        for(int j = i;j<=1e5;j+=i){
            notPrime[j] = true;
            pfac[j].push_back(i);
        }
    }
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin >> n;
        int m[n];
        for(int i = 0;i<n;i++) cin>>m[i];
        int pref[n];
        pref[0] = m[0];
        for(int i = 1;i<n;i++) pref[i] = m[i] + pref[i-1];
        vector<int> li[100001];
        for(int i = 0;i<n;i++){
            for(int j: pfac[m[i]]){
                li[j].push_back(i);
            }
        }
        vector<int> pf[100001], sf[100001];
        for(int i = 0;i<=100000;i++){
            if(li[i].size() == 0) continue;
            pf[i].push_back(m[li[i][0]]);
            for(int j = 1;j<li[i].size();j++){
                pf[i].push_back(m[li[i][j]] + pf[i][j-1]);
            }
            vector<int> temp;
            for(int j: li[i]) temp.push_back(m[j]);
            sort(temp.begin(), temp.end());
            sf[i].push_back(temp[temp.size() - 1]);
            for(int j = 1;j<temp.size();j++){
                sf[i].push_back(temp[temp.size() - 1 - j] + sf[i][j-1]);
            }
        }
        int q;
        cin>>q;
        while(q--){
            int p, k;
            cin>>p>>k;
            int ans = pref[k-1];
            int cnt = lower_bound(li[p].begin(), li[p].end(), k) - li[p].begin();
            if(cnt > 0){
                ans -= pf[p][cnt - 1];
                ans += sf[p][cnt - 1];
            }
            cout<<ans<<endl;
        }
    }

}