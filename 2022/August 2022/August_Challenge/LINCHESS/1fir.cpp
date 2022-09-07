#include<iostream>
#include<climits>

typedef long long int lld;
using namespace std;



int main(int argc, char const *argv[])
{
    int testcases ; 
    cin>> testcases;
    

    while (testcases--)
    {
        lld n,k;
        cin>>n>>k;
        lld *arr1;
        arr1 = new lld[n];
        // lld min1 = INT64_MAX;
        // LLONG_MAX
        lld min1 = LLONG_MAX;
        lld min1val = -1;
        for (int i1 = 0; i1 < n; i1++)
        {
            cin>>arr1[i1];
            if (k>arr1[i1] && k%arr1[i1]==0 )
            {
                if (min1>(k/arr1[i1]))
                {
                    min1 = k/arr1[i1];
                    min1val = arr1[i1];
                }
                


            }
            
        }

        cout<<min1val<<endl;

        delete [] arr1;
    }
    




    return 0;
}


