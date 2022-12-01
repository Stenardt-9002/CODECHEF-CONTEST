// https://www.codechef.com/START60B/problems/DISKMOV



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

int ans_rec(set<int> s1 , int N ,int k);

int ans_rec2(set<int> s1 , int N ,int k)
{
    if(k==0)
        return 0 ;
    s1.insert(2*N);
    return ans_rec(s1,N,k-1);
}

int ans_rec(set<int> s1 , int N ,int k)
{
    if(k==0)
        return 0 ;

    // int min_val =-1;
    // for (int i1 =1; i1 <=2*N && min_val==-1; i1++)
    //     if(i1>N)
    //     {
    //         if(s1[i1-N]==0 || s1[i1-N]==1)
    //             min_val = i1 ;
    //     }
    //     else 
    //     {
    //         if(s1[i1]==0 || s1[i1]==2)
    //             min_val = i1 ;
    //     }
    int min_val = *(s1.begin());
    int max_val = *(--s1.end());

    int num_between = max_val-N ;
    int ans1 = 0 ;
    if(num_between<=k)
        max_val = 2*N, k--;
    int i1 = 1 ;
    while(i1<=2*N && k>0)
    {
        if(s1.find(i1)==s1.end())
        {
            ans1+=(max_val-i1);
            s1.insert(i1);
            k--;
        }
        i1++ ;
    }
    return ans1 ;
    // for (int i1 =1; i1 <=2*N && min_val==-1; i1++)
    //     if(i1>N)
    //     {
    //         if(s1[i1-N]==0 || s1[i1-N]==1)
    //             min_val = i1 ;
    //     }
    //     else 
    //     {
    //         if(s1[i1]==0 || s1[i1]==2)
    //             min_val = i1 ;
    //     }

    // int compare_val  = 0 ;
    // if(max_val !=2*N)
    //     compare_val = ans_rec2(s1 , N , k-1);
    // cout<<"DEUG1 "<<compare_val<<endl;
    // s1.insert(min_val)    ;
    // max_val = *(--s1.end());
    // int returnval = max_val - min_val ;
    // cout<<"DEUG2 "<<returnval<<endl;

    // returnval = max(returnval+ans_rec(s1,N,k-1),compare_val);
    // cout<<"DEUG3 "<<returnval<<endl;

    // return returnval ;
}


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
        int n,k,temp1 ;
        set<int> s1 ;
        // vector<int> array1(n+1,0) ;
        // int input ; 

        // for (int i1 = 0; i1 < n; i1++)
        // {
        //     cin>>input;
        //     if(input>n)
        //         array1[input-n]+=2;
        //     else 
        //         array1[input]+=1;
        // }
        for (int i1 = 0; i1 < n; i1++)
        {
            cin>>temp1 ;
            s1.insert(temp1);
        }
        cout<<ans_rec(s1,n ,k)<<endl;;
        // cout<<*(--s1.end())<<endl;

    }
    

    return 0;
}



// int main(int argc, char const *argv[])
// {
//     fastIO
//     #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     freopen("output1.txt","w",stdout);
//     #endif 
//     int testcases=1 ;
//     cin>>testcases;
//     while (testcases--)
//     {
//         int n,k,temp1 ;
//         cin>> n>>k;
//         int input ; 
//         vector<int> array1(n+1,0) ;
//         for (int i1 = 0; i1 < n; i1++)
//         {
//             cin>>input;
//             if(input>n)
//                 array1[input-n]+=2;
//             else 
//                 array1[input]+=1;


//         }
        


//     }
    

//     return 0;
// }


