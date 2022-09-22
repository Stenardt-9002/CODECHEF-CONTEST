




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
    while (testcase--)
    {
        int size ;
        cin>>size ;
        string n;
        cin>>n ;
        // cout<<"FUCKEM "<<killinSpree(n)<<endl ;
        bool flag1 = true ;
        bool flag2 = true;
        int position = -1 ;
        int count1 = 0 ,i1=0;
        for(i1 = 0 ; i1<n.size();i1++)
            if(n[i1]=='1')
                count1++ ;
        for(i1 = 0 ; i1<n.size();i1++)
        {
            if(n[i1]=='0')
                flag1 = false; 
            if(!flag1)
            {
                if(n[i1]=='1')
                    flag2 = false ;
            }
        }
        if(flag2)
            cout<<n<<endl ;
        else 
        {
        int numbersofzeros = n.size()-count1;
        string connect = "";
        for (int j1 = 0; j1 < numbersofzeros; j1++)
            connect+="0";
        for (int j1 = 0; j1 < count1; j1++)
            connect+="1";
        cout<<connect<<endl;
        // string ans1 = n.substr(0,position)+connect ;
        // cout<<ans1<<" "<<i1<<endl;
        }
    }
    return 0 ;
}
































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
    while (testcase--)
    {
        int size ;
        cin>>size ;
        string n;
        cin>>n ;
        // cout<<"FUCKEM "<<killinSpree(n)<<endl ;
        bool flag1 = true ;
        bool flag2 = true;
        int position = -1 ;
        int count1 = 0 ,i1=0;
        for(i1 = 0 ; i1<n.size();i1++)
            if(n[i1]=='1')
                count1++ ;
        for(i1 = 0 ; i1<n.size();i1++)
        {
            if(n[i1]=='0')
                flag1 = false; 
            if(!flag1)
            {
                if(n[i1]=='1')
                    flag2 = false ;
            }
        }
        if(flag2)
            cout<<n<<endl ;
        else 
        {
        int numbersofzeros = n.size()-count1;
        string connect = "";
        for (int j1 = 0; j1 < numbersofzeros; j1++)
            connect+="0";
        for (int j1 = 0; j1 < count1; j1++)
            connect+="1";
        cout<<connect<<endl;
        // string ans1 = n.substr(0,position)+connect ;
        // cout<<ans1<<" "<<i1<<endl;
        }
    }
    return 0 ;
}



