#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector<int> x1(n);
    // for (auto i = x1.begin(); i != x1.end(); i++)
    for(int i = 0;i<n;i++)
    {
        cin>>x1[i];
    }
    cout<<x1[max_element(x1.begin(),x1.end())-x1.begin()];


    return 0;
}

