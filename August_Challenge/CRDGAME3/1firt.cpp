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
        if (powerchef <10 &&powertick<10)
        {
            /* code */
            cout<<1<<" "<<1; //both single digit

        }
        else
        {
            noumbredigrick = powertick/9;
            if (powertick%9)
            {
                
            noumbredigrick++;

            }
            
            noumbredigchef = powerchef/9;
            if (powerchef%9)
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
        


    }
        



    return 0;
}




