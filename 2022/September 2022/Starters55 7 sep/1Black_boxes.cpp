#include <iostream>
using namespace std;

bool fuc(int n , int k)
{
    if(((k+1)*k/2)<=n)
        return true ;
    // if((n-((k+1)*k/2))%k==0 )
    //     return true ;
    return false ;
}

int main() {
	// your code goes here
	
    int testcase ;
    int n,k;
    cin>>testcase ;
    
    while (testcase--)
    {
        cin>>n>>k ;
        if(fuc(n,k))
            cout<<"YES\n";
        else 
        cout<<"NO\n";
        
    }
	return 0;
}