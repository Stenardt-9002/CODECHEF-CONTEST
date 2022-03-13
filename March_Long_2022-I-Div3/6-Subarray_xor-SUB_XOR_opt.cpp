

// https://www.codechef.com/MARCH221C/problems/SUB_XOR


#define MOD12 998244353



#include <bits/stdc++.h>
using namespace std;


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


int main() 
{
    int testcase ;
    cin>>testcase ;
    string s1="" ;
    long long int n ;


    // cout<<xor_fuc("1","10")<<endl;
    // cout<<str_bin("11")<<endl;
    while(testcase--)
    {
        cin>>n ;
        cin>>s1;
        vector<long long int> dp1(n,0);


        for (long long int i = 0; i < n; i+=2)
        {
            if (s1[i]=='1')
                dp1[i]++;
            if (i-2>=0)
                dp1[i]+=dp1[i-2];
            if(i+1<n)
                dp1[i+1] = dp1[i];

        }
        for (long long int i1 = 0; i1 < n; i1++)
            dp1[i1] = dp1[i1]%2;
                

        long long int ans1  = 0,pow1 = 1;
        for (long long int i1 = n-1; i1 >=0; i1--)
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












