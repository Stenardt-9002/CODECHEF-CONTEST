
#include <bits/stdc++.h>
#include<ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/assoc_container.hpp>


using namespace std;
using namespace __gnu_pbds ;


const int mod1 = (1e9+7);
const long long int mod2 =  1e18 ;

#define mii map<int,int> 
#define msi map<string,int> 
#define musi unordered_map<string,int> 

typedef  long long int lld;

typedef vector<lld> vi ;
typedef vector<vi> vii ;

#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
/*
int main(int argc, char const *argv[])
{
    
    fastIO


    string space_delimiter = " ";
    vector<string> words;
    vi one_line;

    lld testcase ;
    cin>>testcase ;
    while (testcase--)
    {
        
        
        lld n ;
        std::string input1;
        cin>>n ;
        std::getline(std::cin, input1);
        // string space_delimiter = " ";
        // vii graph1(n,vi(n,0));
        vii graph1(n);

        for (int i1 = 0; i1 < n; i1++)
        {
            // std::cout << "Enter your name: ";
            std::getline(std::cin, input1);
            // cout<<" Bruh "<<input1 ;
            words.clear();
            one_line.clear();
            size_t pos = 0;
            while ((pos = input1.find(space_delimiter)) != string::npos) 
            {
                words.push_back(input1.substr(0, pos));
                input1.erase(0, pos + space_delimiter.length());
            }
            words.push_back(input1);

            for (auto wor:words)
                one_line.push_back(stoi(wor)-1);
                // graph1[i1][stoi(wor)-1]=1;
                // graph1[stoi(wor)-1][i1]=1;

            graph1[i1] = one_line ;
            // cout<<endl ;
            // for (auto wor:words)
            //     cout<<" "<<wor ;
        }

        vii distance(n,vi(n,-1));

        double sum1 = INT_MAX ;
        int src_to_pick =0;
        //BFS for each node 
        for (lld i1 = 0; i1 < n; i1++)
        {

            queue<lld> q1 ;//node,distance
            //src i1 
            double dista = 0;
            double total_1 = 0 ;
            q1.push(i1) ;
            distance[i1][i1] = 0;
            while (!q1.empty())
            {
                int size  = q1.size();
                for (auto each = 0; each < size; each++)
                {
                    lld src = q1.front();
                    q1.pop();
                    total_1+=dista ;
                    for (auto neig : graph1[src])
                        if(distance[i1][neig]==-1)
                        {
                            distance[i1][neig] = dista+1 ;
                            q1.push(neig);
                        }
                }
                dista++;//next level

            }//asummed all componenets are connected
            
            //if distance less 
            // cout<<"\nDIS "<<temp_sum ;
            if(total_1<sum1)
            {
                sum1 = total_1 ;
                src_to_pick = i1 ;
            }

        }
        
        cout<<src_to_pick+1<<" "<<setprecision(7)<<((double)(sum1))/((double)(n));
        // cout<<"\n Graph";
        // for (auto x : graph1)
        // {
        //     cout<<endl;
        //     for (auto y : x)
        //         cout<<" "<<y ;
        // }

    }





    return 0;
}
*/

double bfs_sucks(vii &adjacen_list , lld s,lld n) 
{
    queue<lld> q1 ;//node,distance
            //src i1 
    vector<bool> visited(n,false);
    lld dista = 0;
    double total_1 = 0 ;
    q1.push(s) ;
    visited[s] = true;
    while (!q1.empty())
    {
        lld size  = q1.size();
        for (auto each = 0; each < size; each++)
        {
            lld src = q1.front();
            q1.pop();
            total_1+=dista ;
            for (auto neig : adjacen_list[src])
                if(!visited[neig])
                {
                    visited[neig] = true;
                    q1.push(neig);
                }
        }
        dista++;//next level

    }//asummed all componenets are connected
    return total_1/n ;      
}

int main(int argc, char const *argv[])
{
    
    fastIO


    string space_delimiter = " ";
    vector<string> words;
    vi one_line;

    lld testcase ;
    cin>>testcase ;
    cout << fixed << setprecision(6);
    while (testcase--)
    {
        
        
        lld n ;
        std::string input1;
        cin>>n ;
        std::getline(std::cin, input1);
        // string space_delimiter = " ";
        // vii graph1(n,vi(n,0));
        vii graph1(n);

        for (int i1 = 0; i1 < n; i1++)
        {
            std::getline(std::cin, input1);
            words.clear();
            one_line.clear();
            size_t pos = 0;
            while ((pos = input1.find(space_delimiter)) != string::npos) 
            {
                words.push_back(input1.substr(0, pos));
                input1.erase(0, pos + space_delimiter.length());
            }
            words.push_back(input1);
            for (auto wor:words)
                one_line.push_back(stoi(wor)-1);

            graph1[i1] = one_line ;
        }

        // vii distance(n,vi(n,-1));
        double sum1 = bfs_sucks(graph1,0,n) ;
        double total_1 ;
        int src_to_pick =0;
        //BFS for each node 
        for (lld i1 = 1; i1 < n; i1++)
        {
            total_1 = bfs_sucks(graph1,i1,n) ;
            if(total_1<sum1)
            {
                sum1 = total_1 ;
                src_to_pick = i1 ;
            }
        }
        
        cout<<src_to_pick+1<<" "<<sum1<<endl ;
    }

    return 0;
}














