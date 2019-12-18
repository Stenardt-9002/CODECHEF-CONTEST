// #include <iostream>
// #include <stdio.h>
// #include <stdlib.h>
// #include <cstring>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//
//   long int t,n;
//
//   long int arr1[SIEZN];
//   long int temp1,temp2;
//   long int ans = 0;
//
//   cin >> t;
//
//   while (t--)
//   {
//
//
//     // for (long int i = 0; i < SIEZN; i++)
//     // {
//     //   arr1[i] = 0;
//     // }
//     arr1[0] = 0;
//     arr1[1] = 0;
//     arr1[2] = 0;
//     arr1[3] = 0;
//     arr1[4] = 0;
//     arr1[5] = 0;
//     arr1[6] = 0;
//     arr1[7] = 0;
//     arr1[8] = 0;
//     arr1[9] = 0;
//     arr1[10] = 0;
//     // arr1[] = 0;
//
//
//
//     cin >> n;
//
//
//     // memset(arr1, 0, sizeof(arr1));
//
//
//
//
//     for (long int j = 0; j < n; j++)
//     {
//       cin >> temp1;
//       cin>>temp2;
//       if (arr1[temp1-1]<temp2)
//       {
//         arr1[temp1-1] = temp2;
//       }
//
//
//     }
//     ans = 0;
//     for (long int i = 0; i < 8; i++)
//     {
//       ans+=arr1[i];
//
//     }
//     cout << ans ;
//
//   }
//
//
//   return 0;
// }





















#include <iostream>
#include <stdlib.h>
#define SIEZN 11
using namespace std;
int main()
{

  long int t,n;

  long int arr1[SIEZN];
  long int temp1,temp2;
  long int ans = 0;

  cin >> t;
  while (t--)
  {


    for (long int i = 0; i < SIEZN; i++)
    {
      arr1[i] = 0;
    }
    // arr1[0] = 0;
    // arr1[1] = 0;
    // arr1[2] = 0;
    // arr1[3] = 0;
    // arr1[4] = 0;
    // arr1[5] = 0;
    // arr1[6] = 0;
    // arr1[7] = 0;
    // arr1[8] = 0;
    // arr1[9] = 0;
    // arr1[10] = 0;
    // arr1[] = 0;



    cin >> n;






    for (long int j = 0; j < n; j++)
    {
      cin >> temp1;
      cin>>temp2;
      if(temp1<SIEZN)
          {
            if (arr1[temp1-1]<temp2)
            {
            arr1[temp1-1] = temp2;
            }

          }


    }
    ans = 0;
    for (long int i = 0; i < SIEZN-3; i++)
    {
      ans+=arr1[i];

    }

    // ans = arr1[0] + arr1[1] + arr1[2] + arr1[3]+ arr1[4]+ arr1[5] + arr1[6] + arr1[7] ;
    cout << ans ;

  }


  return 0;
}
