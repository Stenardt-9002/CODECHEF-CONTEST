#include <iostream>
using namespace std;

int main() {
	// your code goes here



    
	int testcase ;
    int n;
    cin>>testcase ;
	int p,q ,r;
    while (testcase--)
    {
        cin>>p>>q>>r ;
        long long int ans1 = 1 ;
        while (!(p==0 && q==0 && r==0))
        {
            int ele1 = p%2 ;
            p/=2 ;
            int ele2 = q%2 ;
            q/=2 ;
            int ele3 = r%2 ;
            r/=2 ;
            if(ele1 == 0&& ele2 ==0 && ele3== 0)
                ans1*=1 ;
            else if((ele1 == 1&& ele2 ==1 && ele3== 0)||(ele1 == 1&& ele2 ==0 && ele3== 1)||(ele1 == 0&& ele2 ==1 && ele3== 1) )
                ans1*=1 ;
            else if(ele1 == 1&& ele2 ==1 && ele3== 1)
                ans1*=4 ;
            else 
                ans1 = 0 ,p==0 ,q==0,r==0 ;
        }
        cout<<ans1<<endl;

    }




	return 0;
}
