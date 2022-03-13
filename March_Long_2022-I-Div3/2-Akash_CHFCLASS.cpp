// https://www.codechef.com/MARCH221C/problems/CHFCLASS

#include <bits/stdc++.h>
using namespace std;

int main() {


    int testcase;
    cin>>testcase ;
    long long int n;
    long long int ans1 ;
    while (testcase--)
    {
        cin>>n ;
        ans1 = n/7;
        // cout<<ans1;
        if (n%7>=6)
        {
            ans1++;
        }
        cout<<ans1<<endl;
    }
    




    return 0;
}


