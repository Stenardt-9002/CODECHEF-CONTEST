#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;




///hardcoding aproach
/*
if a large element(without adding shit) is after max encounterd such that element -n is greater than element
    then once max element is subtracted by n then that max will be selected 

else 
    search maximum till ntrarer

*/



int main(int argc, char const *argv[])
{
    int n;
    cin>> n;
    vector<int> sotre_dat(n);

    // int max_datagien_idx=0;
    // int max_datagien_idx_val = -3;
    int max_encontre = -10000;
    int max_encounter_idx = -1;


    int *max_array_storage = new int[n];
    int max_array_storage_idx = -1;


    for (int i1 = 0; i1 < n; i1++)
    {
        cin>>sotre_dat[i1];

        // if (sotre_dat[i1]>max_datagien_idx_val)
        // {
        //     /* storing largest data input */

        //     max_datagien_idx_val = sotre_dat[i1] ;
        //     max_datagien_idx = i1;
        // }
        
        sotre_dat[i1] = sotre_dat[i1]+i1+1;

        if (max_encontre <= sotre_dat[i1])
        {
            max_encontre = sotre_dat[i1];
            max_encounter_idx = i1;
            max_array_storage_idx+=1;max_array_storage[max_array_storage_idx] = i1;
        }
        
    }
    // cout<<endl<<"array";
    // for (auto i = 0; i <= max_array_storage_idx; i++)
    // {
    //     // cout<<sotre_dat[i]<<" ";
    //     cout<<max_array_storage[i];
    // }
    // cout<<endl;
    



    /*
if a large element(without adding shit) is after max encounterd such that element -n is greater than element
    then once max element is subtracted by n then that max will be selected 

else 
    search maximum till ntrarer
    use maximum array instead and keep all index of maximum value and use them until n is subtracted

*/






    for (int ntraer = n-1; ntraer >=0; ntraer--)
    {
        
        if (max_encounter_idx>=ntraer)
        {
            max_encounter_idx = max_array_storage[max_array_storage_idx-1];
            max_array_storage_idx -= 1;
        }
        // else
        // {

            // if (max_encounter_idx < max_datagien_idx && sotre_dat)
            // {
            //     /* code */
            // }
    /*Counter measures ready*/

            // cout<<*max_element(sotre_dat.begin(),sotre_dat.end()) + n-1-ntraer <<" ";

            // max_encounter_idx = max_array_storage[max_array_storage_idx-1];
            // max_array_storage_idx -= 1;

            // cout<<sotre_dat[max_encounter_idx]+  n-1-ntraer <<" ";
        // }
        
           cout<<sotre_dat[max_encounter_idx]+  n-1-ntraer <<" ";

        sotre_dat[ntraer]-=n;
    }
    delete [] max_array_storage;

    return 0;
}



