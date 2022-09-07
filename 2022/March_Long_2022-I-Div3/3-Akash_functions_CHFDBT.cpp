// https://www.codechef.com/MARCH221C/problems/CHFDBT


#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long int n ;
    long long int ans ;
    int testcases ;
    cin>>testcases;
    while (testcases--)
    {
        cin>>n;
        ans = n/2;
        if (n%2==1)
            ans++;

        cout<<ans<<endl;        
    }
    





    return 0;
}









