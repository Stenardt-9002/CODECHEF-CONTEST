
#include<iostream>
#include<vector>
#include<map>

// #include
using namespace std;


int main(int argc, char const *argv[])
{
    int testcaes ;
    int n,k;
    cin>>testcaes;
    while (testcaes--)
    {
        cin>>n>>k;
        // vector<map<int,int>> record_all_cases;
        // vector<vector<int>> xvec1;
        map<int,int> dicknow ;
        vector <int> allowed;
        int *arr1 = new int[n];
        int sum1 = k;
        for (int i1 = 0; i1 < n; i1++)
        {
            cin>>arr1[i1];
            if (dicknow.find(arr1[i1]) == dicknow.end())
            {
                dicknow[arr1[i1]] = 1;
 
            }
            else
            {
                if (dicknow[arr1[i1]] == 1)
                {
                    sum1 = std::min(sum1+k,sum1+2);
                }
                else
                {
                    
                    sum1 = std::min(sum1+k,sum1+1);

                }
                dicknow[arr1[i1]] += 1;
                
            }
            
            

        }
        cout<<sum1<<endl;


        delete [] arr1;

    }
    
    return 0;
}

