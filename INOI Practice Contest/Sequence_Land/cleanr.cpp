
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;



int main(int argc, char const *argv[])
{
  int n ,k;
  cin>>n>>k;
  int count = 1;
  int length1ind,independentcount;
  int inputemp,fristrowlength;
  cin>>fristrowlength;
  vector<int>storevec(fristrowlength);
  

  for (int ik = 0; ik < fristrowlength; ik++)
  {
    cin>>storevec[ik];

  }


  for (int ij = 1; ij < n; ij++)
  {
    std::cin >> length1ind;
    independentcount = 0;

    for(int j1=0;j1<length1ind;j1++)
    {
      cin>>inputemp;
      if(std::find(storevec.begin(),storevec.end(),inputemp)!=storevec.end())
      {
        independentcount++;

      }

    }
    if (independentcount>=k)
    {
      count++;
    }
    independentcount = 0;

  }




  cout<<count;

  return 0;
}
