
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
        vector<map<int,int>> record_all_cases;
        // vector<vector<int>> xvec1;
        vector<int> sumuptnow ;

        int *arr1 = new int[n];


        int min1=99999;

        cin>>arr1[0];
        map<int,int> temp1 ;
        temp1[arr1[0]] = 1;
        record_all_cases.push_back(temp1);

        sumuptnow.push_back(k);
        
        for (int i1 = 1; i1 < n; i1++)
        {
            cin>>arr1[i1];


            int sumiter = 0;


            //for each map in vector (record_allcases)

            vector<map<int,int>> temp_vec;
            vector<int> temp_sum ;

            for (auto &it: record_all_cases)
            {
                

                map<int,int> temp2 = it;
                if (temp2.find(arr1[i1]) == temp2.end())
                {
                    //not found
                    it[arr1[i1]] = 1;
                    // cout<<arr1[i1];
                }
                else
                {
                    // it[arr1[i1]] += 1;
                    // add another map in vector 
                    // int sumnew = sumuptnow[sumiter]+k;
                    // sumuptnow.push_back(sumuptnow[sumiter]+k); //add another table
                    // temp_sum.push_back(sumnew);
                    temp_sum.push_back(sumuptnow[sumiter]+k);

                    map<int,int> temp3 ;
                    temp3[arr1[i1]] =1 ;
                    
                    // record_all_cases.push_back(temp3)  ; //another stream                 
                    temp_vec.push_back(temp3);



                    // temp2 = 0;
                    if (it[arr1[i1]] == 1)
                    {
                        sumuptnow[sumiter] += 2;//due to number clash
                        it[arr1[i1]]++;     //numberof frequency increased
                    }
                    else
                    {
                        sumuptnow[sumiter]++;
                        it[arr1[i1]]++;
                    }

                    
                }
                
                sumiter++;

            }
            int iter1 = 0;
            for (auto &it: temp_vec)
            {
                    record_all_cases.push_back(it);
                    sumuptnow.push_back(temp_sum[iter1++]);
       
                    
            }
            





            
        }



        for (long unsigned int i1 = 0; i1 < sumuptnow.size() ; i1++)
        {
            if(sumuptnow[i1]<min1 )
            {
                min1 = sumuptnow[i1];
            }

        }
        

        cout<<min1<<endl;
            
    
        delete []arr1;

    }
    
    return 0;
}

