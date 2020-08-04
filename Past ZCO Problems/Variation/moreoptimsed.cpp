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
    

    sort(arr1,arr1+n);
// cout<<endl;
    // for (int i1 = 0; i1 < n; i1++)
    // {
    //     cout<<arr1[i1]<<" ";
    // }

    int count1 = 0,j1 = 0,i1=1;
    // while(i1<n||j1<n)
    while(i1<n)
    {
        if (arr1[i1]-arr1[j1]>=k)
        {
            count1+=n-i1;
            j1++;
        }
        else
        {
            i1++;
        }

        
    }

    cout<<count1<<endl;
    
    delete [] arr1;

    return 0;
}
