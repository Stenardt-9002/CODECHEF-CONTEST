
// https://www.youtube.com/watch?v=4nKAfs91ae0&list=PLQXZIFwMtjowYHfL0d8LRSsIdeEVeoMdh&index=7
// https://www.codechef.com/MARCH221C/problems/SUB_XOR


#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define MOD12 998244353



typedef vector<int> vi ;
typedef vector<vi> vii ;

const int mod1 = (1e9+7);

#define mii map<int,int>
#define msi map<string,int>
#define musi unordered_map<string,int>


typedef  long long int lld;


#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


using namespace std;
using namespace __gnu_pbds ;


string binary_s(long long int inp)
{
    int dig ;
    string an = "";
    while (inp>0)
    {
        dig = inp%2 ;
        an = to_string(dig)+an;
        inp = inp/2;
    }
    return an ;
}


// int main() 
// {
//     int testcase ;
//     cin>>testcase ;
//     string s1="" ;
//     long long int n ;


//     // cout<<xor_fuc("1","10")<<endl;
//     // cout<<str_bin("11")<<endl;
//     while(testcase--)
//     {
//         cin>>n ;
//         cin>>s1;
//         vector<long long int> dp1(n,0);


//         for (long long int i = 0; i < n; i+=2)
//         {
//             if (s1[i]=='1')
//                 dp1[i]++;
//             if (i-2>=0)
//                 dp1[i]+=dp1[i-2];
//             if(i+1<n)
//                 dp1[i+1] = dp1[i];

//         }
//         for (long long int i1 = 0; i1 < n; i1++)
//             dp1[i1] = dp1[i1]%2;
                

//         long long int ans1  = 0,pow1 = 1;
//         for (long long int i1 = n-1; i1 >=0; i1--)
//         {
//             if(dp1[i1]==1)
//                 ans1+=pow1 ;

//             ans1=ans1%MOD12 ;
//             pow1=(pow1*2)%MOD12;
//         }
//         cout<<to_string(ans1)<<endl;
//     }
//     return 0;

// }



int main(int argc, char const *argv[])
{
    fastIO

    int testcase ;
    cin>>testcase ;
    string s1="" ;
    lld n ;


    while(testcase--)
    {
        cin>>n ;
        cin>>s1;
        vector<lld> dp1(n,0);
        lld i1 ;
        for (i1 = 0; i1 < n; i1++)
            if (s1[i1]=='1')
                dp1[n-i1-1] = i1+1;
                    
        for (i1 = n-2; i1 >=0; i1--)
            dp1[i1]+=dp1[i1+1];


        for (i1 = 0; i1 < n; i1++)
            dp1[i1] = dp1[i1]%2;

        lld ans1  = 0,pow1 = 1;


        for (i1 = n-1; i1 >=0; i1--)
        {
            if(dp1[i1]==1)
                ans1+=pow1 ;

            ans1=ans1%MOD12 ;
            pow1=(pow1*2)%MOD12;
        }
        cout<<to_string(ans1)<<endl;


    }

    return 0;
}











