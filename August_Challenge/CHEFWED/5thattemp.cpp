#include<algorithm>
#include<iostream>
#include<vector>
#include<map>

// #include
using namespace std;
struct daattipe{
//    vector<map<int,int>> record_all_cases;
//    vector<int> sumuptnow ; 
    map<int,int> soun;
    int sumval;

};

bool compareStructDaat(daattipe i1,daattipe i2)
{
    return i1.sumval < i2.sumval;
}

int main(int argc, char const *argv[])
{
    int testcaes ;
    int n,k;
    cin>>testcaes;
    while (testcaes--)
    {
        cin>>n>>k;
        daattipe var1;
        int *arr1 = new int[n];


        int min1=99999;
        vector<daattipe> ok;
        cin>>arr1[0];

        daattipe sample1 ;
        map<int,int> temp1 ;
        temp1[arr1[0]] = 1;
        sample1.soun = temp1;
        // record_all_cases.push_back(temp1);
        sample1.sumval = k;
        // sumuptnow.push_back(k);
        ok.push_back(sample1);
        for (int i1 = 1; i1 < n; i1++)
        {
            cin>>arr1[i1];


            //for each map in vector (record_allcases)

            vector<map<int,int>> temp_vec;
            vector<int> temp_sum ;

            for (auto &it: ok)
            {
                

                // map<int,int> temp2 = it;
                daattipe sample1 = it;
                if (sample1.soun.find(arr1[i1]) == sample1.soun.end())
                {
                    //not found
                    it.soun[arr1[i1]] = 1;
                    // cout<<arr1[i1];
                }
                else
                {
                    // it[arr1[i1]] += 1;
                    // add another map in vector 
                    // int sumnew = sumuptnow[sumiter]+k;
                    // sumuptnow.push_back(sumuptnow[sumiter]+k); //add another table
                    // temp_sum.push_back(sumnew);
                    temp_sum.push_back(it.sumval+k);

                    map<int,int> temp3 ;
                    temp3[arr1[i1]] =1 ;
                    
                    // record_all_cases.push_back(temp3)  ; //another stream                 
                    temp_vec.push_back(temp3);



                    // temp2 = 0;
                    if (it.soun[arr1[i1]] == 1)
                    {
                        // sumuptnow[sumiter] += 2;//due to number clash
                        it.sumval+=2;
                        // it[arr1[i1]]++;     //numberof frequency increased
                        it.soun[arr1[i1]]++;
                    }
                    else
                    {
                        // sumuptnow[sumiter]++;
                        // it[arr1[i1]]++;
                        it.sumval+=1;
                        it.soun[arr1[i1]]++;


                    }

                    
                }
                
            }




            int iter1 = 0;
            for (auto &it: temp_vec)
            {


                daattipe sample1 ;
                map<int,int> temp1 ;
                temp1 = it;
                sample1.soun = temp1;
                sample1.sumval = temp_sum[iter1++];


                    ok.push_back(sample1);
     
                    
            }
            


                sort(ok.begin(),ok.end(),compareStructDaat);
                // ok.pop_back();



            
        }



        // for (long unsigned int i1 = 0; i1 < ok.size() ; i1++)
        // {
        //     if(ok[i1].sumval<min1 )
        //     {
        //         min1 = ok[i1].sumval;
        //     }

        // }
        
        min1 = ok[0].sumval;
        cout<<min1<<endl;
            
    
        delete []arr1;

    }
    
    return 0;
}

