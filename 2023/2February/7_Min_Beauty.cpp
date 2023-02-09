

// https://www.codechef.com/COOK144C/problems/MINBEAUTY


#include <bits/stdc++.h>
#include<ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/assoc_container.hpp>


using namespace std;
using namespace __gnu_pbds ;


typedef vector<int> vi ;
typedef vector<vi> vii ;

const int mod1 = (1e9+7);
const long long int mod2 =  1e18 ;

#define mii map<int,int> 
#define msi map<string,int> 
#define musi unordered_map<string,int> 

typedef  long long int lld;

#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

// tuple <char, int, float> geek ;
// get<0>(geek)


// pair<int, char> PAIR1;
// PAIR1.first ;
void print_tack(stack<int> a)
{
    cout<<endl<<endl ;
    while (a.empty()==false)
    {
        cout<<a.top()<<endl ;
        a.pop() ;
    }
    cout<<endl<<endl ;
}


// https://www.delftstack.com/howto/cpp/cpp-split-string-by-space/#:~:text=in%20C%2B%2B.-,Use%20std%3A%3Astring%3A%3Afind%20and%20std%3A%3Astring,value%20or%20a%20single%20character.
void processLine_cpp()
{
     string text = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. "
                  "Sed laoreet sem leo, in posuere orci elementum.";
    string space_delimiter = " ";
    vector<string> words{};

    size_t pos = 0;
    while ((pos = text.find(space_delimiter)) != string::npos) {
        words.push_back(text.substr(0, pos));
        text.erase(0, pos + space_delimiter.length());
    }
    words.push_back(text);

}

int function1(int n , string input)
{
    vector<int> hash_1(26,0);
    for(auto c : input)
        if(hash_1[c-'a']++==1)
            return n-2;


    return -1;
}

int main(int argc, char const *argv[])
{
    fastIO
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output1.txt","w",stdout);
    #endif 
    int testcases=1 ;
    cin>>testcases;
    while (testcases--)
    {
        int n ; 
        cin>> n;
        vector<lld> input(n,0) ; 
        for (int i = 0; i < n; i++)
            cin>>input[i];
        
        long long int nas = INT_MAX ;
        sort(input.begin() , input.end());
        for (int i = 0; i < n-2; i++)
        {
            for (int j = i+1; j < n-1; j++)
            {
                lld ele_to_find = 2*input[j]-input[i];
                auto low1 = std::lower_bound(input.begin()+j+1 , input.end() , ele_to_find);
                // auto low2 = std::upper_bound(input.begin()+j+1 , input.end() , ele_to_find);
                int index1 = low1-input.begin() ; 
                int index2 = low1-input.begin()-1 ; 
                if(index2>=0 && index2!=j)
                    nas = min(nas , abs(input[index2]+input[i]-2*input[j]));
                
                nas = min(nas , abs(input[index1]+input[i]-2*input[j]));
                // nas = min(nas , abs(input[index1]+input[i]-2*input[j]) , abs(input[index2]+input[i]-2*input[j]) );

            }
            
        }
        cout<<nas<<endl ;

       

    }
    

    return 0;
}





