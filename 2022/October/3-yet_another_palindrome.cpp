// https://www.codechef.com/START60B/problems/ARRPAL







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
        int n ;
        cin>> n;
        vector<int> array(n,0) ;
        for (int i1 = 0; i1 < n; i1++)
            cin>>array[i1];

        int ptr1 = 0 , ptr2 = n-1 ;
        bool allowed = true ;
        int cur_dis = array[ptr2]-array[ptr1];
        while (ptr1<ceil(n/2) && allowed)
            if(array[--ptr2]-array[++ptr1]<=cur_dis )
                cur_dis = array[ptr2]-array[ptr1];
            else 
                allowed = false ;



        if(allowed)
            cout<<array[n-1]-array[0]<<endl;
        else 
            cout<<-1<<endl;
    

    }
    

    return 0;
}





