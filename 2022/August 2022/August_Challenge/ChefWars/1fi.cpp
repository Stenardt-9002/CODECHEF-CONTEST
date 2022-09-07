#include<iostream>
#include<math.h>

using namespace std;

int main(int argc, char const *argv[])
{

    int testcaes ;
    int daarth,chef;

    cin>>testcaes;
    while (testcaes--)  
    {
        cin>>daarth>>chef;
        double valuelog =  log2(chef);
        // cout<<endl<<valuelog;
        int valuelog1 = (int)(valuelog);
        valuelog1+=1;
        // cout<<endl<<valuelog1;
        double temp1 = 1/(pow(2,valuelog-1));
        temp1 = 2-temp1;
        temp1 = temp1*chef;
        int compareval = (int)(temp1);
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



