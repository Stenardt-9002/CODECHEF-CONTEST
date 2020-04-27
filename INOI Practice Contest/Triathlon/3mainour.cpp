


#include<iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
typedef long long int lld;
#ifndef INT_MAX
#define INT_MAX 98760
#endif
#ifndef INT_MIN
#define INT_MIN -98760
#endif
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
  lld sum1 = 0,min1=INT_MAX,max1= INT_MIN;
  for (lld i = 0; i < n1; i++)
  {
    myDataType temin ;
    std::cin >> temin.firsttime;
    lld temp1,tmep2;
    std::cin >> temp1>>tmep2;
    temin.resttime = temp1+tmep2;
    inpu1t[i] = temin;
    sum1+=temin.firsttime;
    if (max1<(inpu1t[i].firsttime+inpu1t[i].resttime))
    {
      max1 = inpu1t[i].firsttime+inpu1t[i].resttime;


    }
    if (min1>inpu1t[i].resttime)
    {
      min1=inpu1t[i].resttime;
    }
  }

  if (sum1+min1<max1)
  {
    std::cout << max1 ;
  }
  else
  {
    std::cout << sum1+min1;
  }


  return 0;
}
