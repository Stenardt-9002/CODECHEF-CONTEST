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
    // int max_encounter_idx = -1;
    for (int i1 = 0; i1 < n; i1++)
    {
        cin>>sotre_dat[i1];
        sotre_dat[i1] = sotre_dat[i1]+i1+1;

        if (max_encontre < sotre_dat[i1])
        {
            max_encontre = sotre_dat[i1];
            // max_encounter_idx = i1;
        }
        
    }
    // cout<<endl;
    // for (auto i = 0; i < n; i++)
    // {
    //     cout<<sotre_dat[i]<<" ";
    // }
    // cout<<endl;
    

    for (int ntraer = n-1; ntraer >=0; ntraer--)
    {
        /* code */
        cout<<*max_element(sotre_dat.begin(),sotre_dat.end()) + n-1-ntraer <<" ";
        sotre_dat[ntraer]-=n;
    }
    

    return 0;
}



