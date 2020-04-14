

#include<iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
typedef long long int lld;


typedef struct myDataType{
  lld firsttime;
  lld resttime;
}myDataType ;

using namespace std;

bool compare1st(myDataType a ,myDataType b)
{
  if (a.firsttime+a.resttime==b.firsttime+b.resttime)
  {
    return a.firsttime>b.firsttime;
  }
  return a.firsttime+a.resttime>b.firsttime+b.resttime;
}



int main(int argc, char const *argv[])
{

  lld n1;
  cin>>n1;
  std::vector<myDataType> inpu1t(n1);
  lld sum1 = 0;
  for (lld i = 0; i < n1; i++)
  {
    myDataType temin ;
    std::cin >> temin.firsttime;
    lld temp1,tmep2;
    std::cin >> temp1>>tmep2;
    temin.resttime = temp1+tmep2;
    inpu1t[i] = temin;
    sum1+=temin.firsttime;
  }
  sort(inpu1t.begin(),inpu1t.end(),compare1st);
  // for (lld i = 0; i < n1; i++)
  // {
  //   cout<<" "<< inpu1t[i].firsttime<<" "<<inpu1t[i].resttime<<'\n';
  //
  // }
  lld compvar1,maxsum1 = sum1+inpu1t[n1-1].resttime;

  for (lld ij1 = n1-1; ij1 >=0; ij1--)
  {
    compvar1 = sum1+inpu1t[ij1].resttime;
    if (maxsum1<compvar1)
    {
      maxsum1 = compvar1;
    }

      // std::cout <<endl<< maxsum1<<" ,"<<sum1 << '\n';
    sum1 = sum1-inpu1t[ij1].firsttime;
  }

  std::cout << maxsum1 << '\n';

  return 0;
}
