#include<iostream>
#include<math.h>

using namespace std;

int main(int argc, char const *argv[])
{

    int testcaes ;int valuelog1;
    double temp1;
    int daarth,chef;
    int compareval;
    double valuelog;
    cin>>testcaes;
    while (testcaes--)  
    {
        cin>>daarth>>chef;
        valuelog =  log2(chef);
        // cout<<endl<<valuelog;
        valuelog1 = (int)(valuelog);
        valuelog1+=1;
        // cout<<endl<<valuelog1;
        temp1 = 1/(pow(2,valuelog-1));
        temp1 = 2-temp1;
        temp1 = temp1*chef;
        compareval = (int)(temp1);
        // cout<<compareval;

        if (daarth>compareval)
        {
            cout<<0;
        }
        else
        {
            cout<<1;
        }
        
        

    }
    

    
    return 0;
}



