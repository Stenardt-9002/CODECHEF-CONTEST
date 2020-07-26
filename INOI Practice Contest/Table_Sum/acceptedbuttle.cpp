#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;




int main(int argc, char const *argv[])
{
    int n;
    cin>> n;
    vector<int> sotre_dat(n);

    int max_encontre = -10000;
    int max_encounter_idx = -1;


    int *max_array_storage = new int[n];
    int max_array_storage_idx = -1;


    for (int i1 = 0; i1 < n; i1++)
    {
        cin>>sotre_dat[i1];
        
        sotre_dat[i1] = sotre_dat[i1]+i1+1;

        if (max_encontre <= sotre_dat[i1])
        {
            max_encontre = sotre_dat[i1];
            max_encounter_idx = i1;
            max_array_storage_idx+=1;max_array_storage[max_array_storage_idx] = i1;
        }
        
    }




    for (int ntraer = n-1; ntraer >=0; ntraer--)
    {
        
        if (max_encounter_idx<= ntraer)
        {
           cout<<sotre_dat[max_encounter_idx]+  n-1-ntraer <<" ";
        }
        else
        {

      
    /*Counter measures ready*/

            cout<<*max_element(sotre_dat.begin(),sotre_dat.end()) + n-1-ntraer <<" ";
          }
        

        sotre_dat[ntraer]-=n;
    }
    delete [] max_array_storage;

    return 0;
}



