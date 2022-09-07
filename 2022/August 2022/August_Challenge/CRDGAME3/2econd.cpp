#include<iostream>
#include<math.h>
#include<climits>

typedef long long int lld;

using namespace std;

int main(int argc, char const *argv[])
{
    lld testcaes ;
    cin>>testcaes;
    lld powerchef,powertick;
    lld noumbredigchef,noumbredigrick;
    while (testcaes--)  
    {
            cin>>powerchef>>powertick;
     
            noumbredigrick = powertick/9;
            if (powertick%9!=0)
            {
                
            noumbredigrick++;

            }
            
            noumbredigchef = powerchef/9;
            if (powerchef%9!=0)
            {
                
            noumbredigchef++;

            }
            
            if (noumbredigchef>=noumbredigrick)
            {
                cout<<1<<" "<<noumbredigrick<<endl;//rick has less digits
            }
            else
            {
                cout<<0<<" "<<noumbredigchef<<endl;//rick has less digits
                
            }
            
    }
        
    return 0;
}
