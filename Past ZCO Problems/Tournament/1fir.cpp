#include<iostream>

using namespace std;
typedef long long int lld;



int main(int argc, char const *argv[])
{
    lld n;
    cin>>n;
    lld *arr1 = new lld[n];
    for (lld i1 = 0; i1 < n; i1++)
    {
        cin>>arr1[i1];
    }
// cout<<endl;

    lld asum1 = 0;
    lld tem1p;
    for (lld i1 = 0; i1 < n; i1++)
    {
        // cout<<arr1[i1]<<" ";
        for (lld j1 = i1+1; j1 < n; j1++)
        {
            tem1p = arr1[i1]-arr1[j1] ;
            if (tem1p<0)
            {
                asum1-=tem1p;
            }
            else
            {
                asum1+=tem1p;
            }
            
            
        }
        
    }
    cout<<asum1<<endl;

    delete [] arr1;




    return 0;
}




