#include<iostream>
#include<map>
#include<algorithm>
#include<set>
using namespace std;
auto cmp = [](std::pair<char,int> const & a, std::pair<char,int> const & b) 
{ 
    //  return a.second != b.second?  a.second < b.second : a.first < b.first;
     return a.first<b.first;

};





// string check_key(map<char,char> ke_1y,int key)
// {
//     return "Fuck";
// }



int main(int argc, char const *argv[])
{


    int testcaes;
    cin>>testcaes;
    string str1,pattern;
    string answr1 ;
    while (testcaes--)
    {
    map<char,int> map1pattern,map2str1;
        cin>>str1>>pattern;
        char strtofpattern = pattern[0];
        char secondofpattern = pattern[1];//not as same as first letter of pattern (next comming)
        for (long unsigned int i1 = 1; i1 < pattern.length(); i1++)
        {
            if (strtofpattern != pattern[i1] )
            {
                secondofpattern = pattern[i1];
                break;
            }
            
        }
        
        // bool startmissing = false ;//if starting character of pattern is only is same number in main string as compared to pattern
        for (long unsigned int i1 = 0; i1 < pattern.length(); i1++)
        {
            // cout<<" "<<pattern[i1];
            if (map1pattern.find(pattern[i1]) == map1pattern.end())
            {
                map1pattern[pattern[i1]] = 1;
            }
            else
            {
                map1pattern[pattern[i1]]++;
            }
            
                       
        }

        for (long unsigned int i1 = 0; i1 < str1.length(); i1++)
        {
            // cout<<" "<<str1[i1];
            if (map2str1.find(str1[i1]) == map2str1.end())
            {
                map2str1[str1[i1]] = 1;
            }
            else
            {
                map2str1[str1[i1]]++;
            }
                      
        }

        for (auto itr = map1pattern.begin(); itr != map1pattern.end(); ++itr) 
        { 
            // if(itr->first==strtofpattern)
            // {
            //     if(map2str1[itr->first]>map1pattern[itr->first])
            //     {
            //         map2str1[itr->first] -= map1pattern[itr->first];
            //         startmissing = false;
            //     }
            //     else if(map2str1[itr->first]==map1pattern[itr->first])
            //     {
            //         map2str1[itr->first] =1;
            //         startmissing = true;
            //     }
            // }
            // else
            // {
            //     map2str1[itr->first] -= map1pattern[itr->first] ;
            // }
            map2str1[itr->first] -= map1pattern[itr->first];


        }
        // sort(map2str1.begin(),map2str1.end(),cmp);
        // instead of sorting use a funking map ~Hangover
        // for (auto itr = map2str1.begin(); itr != map2str1.end(); ++itr) { 
        // cout << '\t' << itr->first 
        //      << '\t' << itr->second << '\n'; 
        // }
        // std::set<std::pair<int, std::string>> s;
        
        
        // std::set<std::pair<char, int>>s;
 
        // auto itr;
        // cout<<endl;
        // for (auto itr = map2str1.begin(); itr != map2str1.end(); ++itr) { 
        // cout << '\t' << itr->first 
        //      << '\t' << itr->second << '\n'; 
    // }

        //allready sorted
        answr1 = "";
        for (auto itr = map2str1.begin(); itr != map2str1.end(); ++itr)
        {
            /* code */
            if (itr->first == strtofpattern)
            {
                /* code */
                if (secondofpattern<strtofpattern)
                {
                    answr1+=pattern; 
                    while (map2str1[itr->first]>0)
                    {
                    /* code */
                    map2str1[itr->first]--;
                    answr1+=itr->first;

                    }
                }
                // else if (secondofpattern<=strtofpattern)
                else
                {
                    while (map2str1[itr->first]>0)
                    {
                    /* code */
                    map2str1[itr->first]--;
                    answr1+=itr->first;

                    }
                    answr1+=pattern; 

                }


            }
            else
            {
                while (map2str1[itr->first]>0)
                {
                    /* code */
                    map2str1[itr->first]--;
                    answr1+=itr->first;

                }
                
            }
            
            
        }
        
        cout<<answr1<<endl;
    }
    
    
    return 0;
}



