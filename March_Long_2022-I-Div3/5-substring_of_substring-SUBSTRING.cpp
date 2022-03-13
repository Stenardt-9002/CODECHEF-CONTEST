// https://www.codechef.com/MARCH221C/problems/SUBSTRING


#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long int n;
    int testcase ;cin>>testcase ;
    string s1="" ;


    long long int curC_unt = 0,finalans = 0;

    while(testcase--)
    {
        cin>>s1 ; n = s1.length();
        curC_unt = 0;finalans = 0;
        for (int i1 = 1; i1 < n-1; i1++)
        {
            if (s1[i1]!=s1[0] && s1[i1]!=s1[n-1])
                curC_unt++;

            else
                curC_unt=0;            

            finalans = max(finalans,curC_unt);
        }
        if (finalans==0)
            cout<<-1<<endl;
        else
            cout<<finalans<<endl;                
        
    }

    return 0;
}








