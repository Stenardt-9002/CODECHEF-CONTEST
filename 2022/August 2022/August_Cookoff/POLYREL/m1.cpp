#include<iostream>

using namespace std;

typedef long long int lld;



int main(int argc, char const *argv[])
{

    int testcase ;
    lld x1[100010],y1[100010];
    lld n;
    cin>>testcase;

    while (testcase--)
    {
        cin>>n;
        lld asnwer1 = n;
        lld i1 = 0;
        while (i1<n)
        {
            cin>>x1[i1]>>y1[i1];
            i1++;
        }

        while (n>=6)
        {
            n= n/2;
            asnwer1+=n;
        }
        
        cout<<asnwer1<<endl;
        
    }
    



    return 0;
}















