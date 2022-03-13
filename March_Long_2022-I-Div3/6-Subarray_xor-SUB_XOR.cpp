
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


long long int str_bin(string a)
{
    long long int ans1 = 0;
    // long long int n = a.length();
    // long long int pow = 1;
    // while (n--)
    // {
    //     ans1+=((pow*stoi(a[n]))%MOD12);
    //     pow = pow*2;
    // }
    ans1 = stoll(a,nullptr,2);
    return ans1;
}


string xor_fuc(string a1,string b1)
{
    int len1 = a1.length();
    int len2 = b1.length();
    string ans1 = "";
    int i,j;
    for (i=len1-1,j=len2-1  ; i>=0&&j>=0  ;i--,j-- )
    {
        if (a1[i]==b1[j])
            ans1='0'+ans1 ;
        else
            ans1='1'+ans1 ;

    }
    while (i>=0)
        {
            ans1=a1[i]+ans1 ;
            i--;
        }

    while (j>=0)
        {
            ans1=a1[j]+ans1 ;
            j--;
        }
    return ans1;
}


int main() 
{
    int testcase ;
    cin>>testcase ;
    string s1="" ;
    long long int n ;
    // long long int inp1;
    //all subtrings 
    string tem1p ;


    // cout<<xor_fuc("1","10")<<endl;
    // cout<<str_bin("11")<<endl;
    while(testcase--)
    {
        // n = s1.length();
        cin>>n ;
        // cin>>inp1;
        // s1 = binary_s(inp1);
        // s1 = inp1;
        cin>>s1;
        vector<string> substrings ;

        // cout<<s1 ;
        for (int i1 = 0; i1 <n ; i1++)
        {
            for (int len1 = 1; len1 <= n-i1; len1++)
            {
                tem1p = s1.substr(i1,len1);
                substrings.push_back(tem1p);
            }
        }
        // cout<<"DEBUG1"<<endl;
        // for (auto x: substrings )
        // {
        //     cout<<" "<<x;
        // }
        // cout<<endl;
        tem1p = substrings[0];
        for (long int i1 = 1; i1 < substrings.size(); i1++)
        {
            tem1p = xor_fuc(tem1p,substrings[i1]);
        }
        cout<<str_bin(tem1p)<<endl;

        
    }


    return 0;

}



