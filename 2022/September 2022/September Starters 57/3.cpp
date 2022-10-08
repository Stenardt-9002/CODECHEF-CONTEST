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

 
set<int> SieveOfEratosthenes(int n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    set<int> anbs1 ;
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 
    // Print all prime numbers
    for (int p = 2; p <= n; p++)
        if (prime[p])
            anbs1.insert(p);
            // cout << p << " ";
    return anbs1 ;
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
        
        vector<int>prime_nu_vec(prime_nums.begin(),prime_nums.end());
        for (int i1 = 0; i1 < input.size(); i1++)
        {
            for(int j1 =0 ;j1< prime_nu_vec.size()&&(prime_nu_vec[j1]*prime_nu_vec[j1]<=input[i1]+1)  ; j1++)
                if(input[i1]!=1 && input[i1]%prime_nu_vec[j1]==0)
                    mapprimetoindex[prime_nu_vec[j1]].insert(i1),  mapprimetonumsandindex[prime_nu_vec[j1]].insert({input[i1],i1}) ;
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

