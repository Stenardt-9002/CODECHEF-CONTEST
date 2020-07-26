#include<iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int n;
    int *arr;
    cin>>n;
    arr = new int[n];
    int max_idx = -999;
    int max_val = -9999;
    //max array index container

    int *max1;
    max1 = new int[n];
    int max_iter = 0;
    //store all INDEXES of values before the aquired main max which were maximum


    for (int o1 = 0; o1 < n; o1++)
    {
        cin>>arr[o1];
        arr[o1] = arr[o1]+1+o1;
        if (max_val<=arr[o1])
        {
            max1[max_iter] = o1;
            max_val = arr[o1];
            max_idx = o1;
            max_iter+=1;
        }

     //store all maximum on left to maixum because traersal on left sides   
    }
    int store_max = max_val;
    int store_max_idx = max_idx;

    //now 1,2,3,4,5,6...N has been added //start adding one except from certain idx delete n

    
    //keep subtracting N as soon as it reaches max idx add n-i1-1 (numer of times loop ran) to all elements (j is length of elements from subtraction took place)

    // 

    for (int i1 = n-1; i1 >=0; i1--)
    {
        //shtfu
        cout<<arr[max_idx]+n-1-i1<<" ";

        arr[i1] -= n;

        if (i1==max_idx)
        {
            //found maximum is being subtracted
            //find new max
            if (arr[i1]<store_max-n)
            {
                /* code */
                //the maxium value possible 

                max_idx = store_max_idx; // possibru
            }
            //start traersing array to lower value
            else if( max_iter>=2 && arr[i1]<arr[max1[max_iter-2]] ) //if maximum valeu  then it will maximum until subtracted //max_iter is current the main maximium used start with max_iter-2
            {
                // max_idx = i1;
                max_idx = max1[max_iter-2]; max_iter--;    
            }
            

        }
        
    }
    

    delete [] arr;
    delete [] max1;


    return 0;
}

