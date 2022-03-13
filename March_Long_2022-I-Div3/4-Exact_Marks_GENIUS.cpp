// https://www.codechef.com/MARCH221C/problems/GENIUS
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long int n,x;//n question and x score
    int testcase ;cin>>testcase ;
    
    while(testcase--)
    {
        cin>>n>>x;  
        long long int q1=0,q2=0;

        if (x%3==0)
            q1+=(x/3)    ;

        else if(x%3==1)
        {
            q1+=(x/3);
            q1++ ;
            q2+=2 ;
        }
        else if(x%3==2)
        {
            q1+=(x/3) ;q1++; q2++ ;
        }

        if (q1+q2<=n)
        {
            cout<<"YES"<<endl;
            cout<<q1<<" "<<q2<<" "<<n-q2-q1 ;cout<<endl;
        }
        else
            cout<<"NO"<<endl;
        
    }

    return 0;

}