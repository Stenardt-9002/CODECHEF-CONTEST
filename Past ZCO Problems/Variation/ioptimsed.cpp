#include<iostream>
#include<algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    int n,k;
    cin>>n>>k;


    int *arr1 = new int[n];
    for (int i1 = 0; i1 < n; i1++)
    {
        cin>>arr1[i1];
    }
    

    // sort(arr1,arr1+n);
// cout<<endl;
//     for (int i1 = 0; i1 < n; i1++)
//     {
//         cout<<arr1[i1]<<" ";
//     }

    int count1 = 0;
    for (int i1 = n-1; i1 >0; i1--)
    {
        for (int k1 = 0; k1 < i1; k1++)
        {
            // if (k1!=i1)
            // {
            //     /* code */
            //     if (arr1[i1]-k>=arr1[k1])
            //     {
            //         count1++;
            //     }
                
            // }
            if ((arr1[i1]>=arr1[k1]+k)||(arr1[k1]>=arr1[i1]+k))
            {
                count1++;   
            }
            


        }
        
        
    }

    cout<<count1<<endl;
    
    delete [] arr1;

    return 0;
}
