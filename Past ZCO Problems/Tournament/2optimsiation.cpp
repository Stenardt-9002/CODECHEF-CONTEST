#include<iostream>
#include<algorithm>
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

    lld asum1 = 0;
    // lld tem1p;

    sort(arr1,arr1+n);
    // cout<<endl;
    // for (lld i = 0; i < n; i++)
    // {
    //     cout<<arr1[i]<<" ";
    // }
    

    for (lld i1 = 0; i1 < n; i1++)
    {
        asum1+=((i1*arr1[i1])-(i1*arr1[n-1-i1]));
    }

    
    cout<<asum1<<endl;



    delete [] arr1;

    return 0;
}

