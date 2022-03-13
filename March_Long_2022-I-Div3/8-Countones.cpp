// https://www.codechef.com/MARCH221C/problems/COUNTONES



#include <bits/stdc++.h>
using namespace std;


int ountones_ins(string a)
{
    int count1 = 0;
    for (auto i1 = 0; i1 < a.length(); i1++)
    {
        if (a[i1]=='1')
        {
            count1++;
        }
        
    }
    return count1 ;
}

int main(int argc, char const *argv[])
{
    int testcase ;
    long long int n;
    long long int k ;
    long long int ans1 = 0;
    cin>>testcase ;
    while (testcase--)
    {
        ans1 = 0;
        cin>>n>>k;
        n = (1<<n)-1;
        queue<string> containBS;
        set<string> heap1;
        string temp1,temp2;
        containBS.push("1");
        while (n--)
        {
            temp1 = containBS.front();
            containBS.pop() ;
            //temp1 
            heap1.insert(temp1);
            temp2 = temp1 ;
            containBS.push(temp1.append("0"));
            containBS.push(temp2.append("1"));

        }

        for (auto x : heap1)
        {
            cout<<" "<<x;
            // if (k-->0)
            // {
            //     // cout<<" "<<x<<" "<<k<<"   ";
            //     ans1+=ountones_ins(x);
            // }
            
        }
        
        // cout<<ans1<<endl;

    }
    
    return 0;
}






