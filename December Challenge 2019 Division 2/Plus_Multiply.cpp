#include <iostream>
#include <stdlib.h>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{

  int t,n;
  long long int arr1[40001];
  int strt,end;
  int ans = 0;
  std::cin >> t;
  while (t--)
  {
    std::cin >> n;
    for (size_t i = 0; i < n; i++)
    {
      std::cin >> arr1[i];
    }
    sort(arr1,arr1+n);
    strt = 0;end = n-1;
    ans =0;
    while (strt!=end)
    {
      if ((arr1[strt]+arr1[end])==(arr1[strt]*arr1[end]) )
      {
        ans+=1;

      }

      else if((arr1[strt]+arr1[end])>(arr1[strt]*arr1[end]))
      {

      }

    }


  }


  return 0;
}
