
// https://www.codechef.com/problems/KPRIME
// https://discuss.codechef.com/t/kprime-editorial/2651

#include <bits/stdc++.h>
#include<ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/assoc_container.hpp>


using namespace std;
using namespace __gnu_pbds ;

typedef  long long ll1d;
using namespace std;






int main(int argc, char const *argv[])
{
     	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);


    vector<int> primes_list ; // prim enumbers
    vector<int> unique_fac(100000,0); //start from 2 
    primes_list.push_back(2);
    primes_list.push_back(3);
    primes_list.push_back(5);

    unique_fac[0] = 1;//1
    // unique_fac[1] = 1;//2
    // unique_fac[2] = 1;//3
    // unique_fac[3] = 1;//4
    // unique_fac[4] = 1;//5


    // for (int i1 = 7; i1 < 100; i1++)
    for (int i1 = 7; i1 < 100000; i1++)
    {
        int till = (int)(sqrt(i1))+1 ;
        bool prime_check = false ;
        for (int j1 = 0; primes_list[j1] < till; j1++)
        {
            if((i1%primes_list[j1])==0)
            {
                prime_check = true; 
                break ;
            }
        }
        if(!prime_check)
        {
            primes_list.push_back(i1);
            // unique_fac[i1-1]=1;
        }
    }

    // for (int i1 = 6; i1 < 100005; i1++)
    // for (int i1 = 3; i1 < 100005; i1++)
    for (int i1 = 3; i1 < primes_list.size(); i1++)
    {
        int multiple=2 ;
        int number = i1-1;
        while(number*multiple<100001)
        {
            unique_fac[number]++;
            primes_list[i1-1];
            multiple++ ;
        }


            // // int till = (int)(sqrt(i1))+1 ;
            // int till = (int)(i1/2) ;
            // // for (int j1 = 0; primes_list[j1] < till+1; j1++)
            // for (int j1 = 0; primes_list[j1] < till+1; j1++)
            // {
            //     // if(i1%primes_list[j1]==0  && (i1/primes_list[j1])<till+1)
            //     //     unique_fac[i1-1]++;
            //     // else if(i1%primes_list[j1]==0 )
            //     //     unique_fac[i1-1]+=2;
            //     if(i1%primes_list[j1]==0 )
            //         unique_fac[i1-1]++;
            // }
    }
    



    // cout<<endl;
    // // for (auto x : primes_list)
    // for (int i1=0 ;i1<100; i1++)
    //     cout<<" "<<primes_list[i1];

    // cout<<endl;
    // for (int i1=1 ;i1<100; i1++)
    //     cout<<i1<<" "<<unique_fac[i1-1]<<"     ";
    
    ll1d testcase ,n,i1,j1;
    cin>>testcase ;
    ll1d a1,b1,k;
    while (testcase--)
    {
        int cunt1 = 0;
        cin>>a1>>b1>>k ;
        for (i1 = a1; i1 <=b1; i1++)
            if(unique_fac[i1-1]==k)
                cunt1++ ;
        
        cout<<cunt1<<endl;
        // vector<vector<int>> dp1 ;
        // for ( i1 = 0; i1 < 5; i1++)
        // {
        //     vector<int> temp1(1e5,0);
        //     dp1.push_back(temp1);
        // }
        
    }
    return 0;
}
















