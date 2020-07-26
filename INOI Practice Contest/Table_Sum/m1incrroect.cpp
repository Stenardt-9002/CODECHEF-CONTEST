
/*

Wrong IMplemetation 

58-68 once maxium encountered we have prblem since at each fuhrer steps numbers are being decremented by n


*/


#include<iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int n;
    int *arr;
    cin>>n;
    arr = new int[n];
    int max_idx = 0;
    int max_val = 0;
    for (int o1 = 0; o1 < n; o1++)
    {
        cin>>arr[o1];
        arr[o1] = arr[o1]+1+o1;
        if (max_val<arr[o1])
        {

            max_val = arr[o1];
            max_idx = o1;
        }

        
    }



    //now 1,2,3,4,5,6...N has been added //start adding one except from certain idx delete n

    
    //keep subtracting N as soon as it reaches max idx add j to all elements (j is length of elements from subtraction took place)

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
            max_val = -10000;
            for (int ij1 = 0; ij1 < n-1; ij1++)
            {
                if (max_val<arr[ij1])
                {
                    /* code */
                    max_val = arr[ij1];
                    max_idx = ij1;
                }
                

            }






        }
        
    }
    

    delete [] arr;

    return 0;
}

