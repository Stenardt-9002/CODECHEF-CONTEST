#include <iostream>
#include <stdlib.h>
#include <algorithm>
using namespace std;


long long int com(long long int a)
{
  if (a>1)
  {
    a = a*(a-1);
    a = a/2;
    return a;
  }
  return 0;
}


int main(int argc, char const *argv[])
{

  long long int t,n;
  long long int arr1[40001];
  long long int count2t = 0,count0t = 0;
  long long int ans = 0;
  std::cin >> t;
  while (t--)
  {
    std::cin >> n;
    count2t = 0;count0t = 0;
    ans = 0;
    for (size_t i = 0; i < n; i++)
    {
      std::cin >> arr1[i];
      if (arr1[i]==2)
      {
        count2t+=1;
      }

      if (arr1[i]==0)
      {
        count0t+=1;
      }



    }
    // sort(arr1,arr1+n);
    // strt = 0;end = n-1;
    // ans =0;
    // for (size_t i = 0; i < n; i++)
    // {
    //   if () {
    //     /* code */
    //   }
    //
    // }

    ans = com(count2t)+com(count0t);
    std::cout << ans << '\n';
  }


  return 0;
}
