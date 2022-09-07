#include<iostream>
#include<math.h>

using namespace std;

int main(int argc, char const *argv[])
{

    int testcaes ;int valuelog1;
    int daarth,chef;
    int damage1 ;
    double valuelog;
    cin>>testcaes;
    while (testcaes--)  
    {
        cin>>daarth>>chef;
        valuelog =  log2(chef);
        valuelog1 = (int)(valuelog)+1;
        damage1 = 0;
        for (int i1 = 0; i1 < valuelog1; i1++)
        {
            damage1 += chef;
            chef = chef/2;
        }
        // cout<<endl<<damage1;

        if (daarth>damage1)
        {
            cout<<0<<endl;

        }
        else
        {
            cout<<1<<endl;
        }      
        

    }
    

    
    return 0;
}



