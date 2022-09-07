// https://www.codechef.com/MARCH221C/problems/COUNTONES



#include <bits/stdc++.h>
using namespace std;



typedef  long long int lld;

int main(int argc, char const *argv[])
{
    int testcase ;
    lld n,k;
    cin>>testcase ;


    vector<vector<lld>> dp1(52,vector<lld>(2,0));
    vector<vector<lld>> dp2(52,vector<lld>(2,0));

    dp1[0][0] = 1 ; dp1[0][1] = 0;


    vector<lld> temp_dp1(52,0);
    vector<lld> temp_dp2(52,0);

    vector<lld> prefix_of_temp_dp1(52,0);
    lld sumi_dp1 = 1,sumi_dp2 = 0;
    lld total1 = 0 ;
    temp_dp1[0] = 1;


    for (auto i = 1; i < 52; i++)
    {
        dp1[i][1]+=(dp1[i-1][0]+dp1[i-1][1]);
        dp1[i][0]+=(dp1[i-1][0]+dp1[i-1][1]);
        dp2[i][1]+=dp1[i-1][0]+dp1[i-1][1]+dp2[i-1][0]+dp2[i-1][1];

        dp2[i][0]+=dp2[i-1][0]+dp2[i-1][1] ;

        sumi_dp1+=dp1[i][0]+dp1[i][1] ;temp_dp1[i] = sumi_dp1 ; 
        sumi_dp2+=dp2[i][0]+dp1[i][1] ;temp_dp2[i] = sumi_dp2 ; 

        total1+=sumi_dp1 ; prefix_of_temp_dp1[i] = total1 ;


    }
    







    while (testcase--)
    {
        
        cin>>n>>k;
        

        lld cur1 = 1,cur2=1,finalans = 1;
        string man = "1";
        lld itr = 1;
        lld temptotal;
        while (cur1<k)
        {
            temptotal = temp_dp1[n-itr-1];

            if (cur1+temptotal<k)
            {
                man.push_back('1') ;
                finalans+=cur2*temptotal ;
                finalans+=temp_dp2[n-itr-1];                
                finalans+=(++cur2) ;
                cur1+=(temptotal+1);

                if (n>3&&itr<=n-3)
                {
                    finalans+=prefix_of_temp_dp1[n-(itr+2)];
                }
            }
            else
            {
                man.push_back('0');finalans+=cur2 ;cur1++ ;
            }
            
            itr++ ;
        }
        
        cout<<finalans<<endl;

    }
    
    return 0;
}









