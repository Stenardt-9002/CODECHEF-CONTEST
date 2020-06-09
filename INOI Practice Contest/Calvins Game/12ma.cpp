
#include <iostream>
#include <algorithm>
#include <vector>
typedef long long int lld;

using namespace std;


int main(int argc, char const *argv[])
{

  lld toalN,strtpos,sumtil=0;
  lld *array;
  std::cin >> toalN>>strtpos;
  strtpos--;
  array = new lld[toalN];
  lld i=0;
  std::vector<int> vect_1savenegindex;
  while (i<toalN)
  {
    std::cin >> array[i];
    if (array[i]<0)
    {
        vect_1savenegindex.push_back(i);
    }
    i++;
  }
  // std::cout << vect_1savenegindex.empty();
  i = strtpos;
  if (vect_1savenegindex.empty())
  {
    // std::cout << "EMPTY" << '\n';

    while (i<toalN)
    {
      sumtil+=(2*array[i]);

      i++;
    }
    i = strtpos;
    while (i>0)
    {
      i--;
      sumtil+=array[i];

    }

  }

  else
  {
    i = strtpos;
    while(i<toalN)
    {
      if(array[i+1]>0&&array[i+2]>0)
      {
        i = i+2;
        sumtil+=array[i+1]+array[i+2];
      }
      else if(array[i+1]<0&&array[i+2]>0)
      {
        i = i+2;
        sumtil+=array[i+2];
      }
      else if(array[i+1]>0&&array[i+2]<0)
      {

        i = i+1;
        if (i>=toalN)
        {
          i ==toalN-1;
        }
        else
        {

          sumtil+=array[i+1];
        }
      }
      else if(array[i+1]<0&&array[i+2]<0)
      {
        if (array[i+1]>array[i+2])
        {
          i= i+1;
          if (i>=toalN)
          {
            i ==toalN-1;
          }
          else
          {

            sumtil+=array[i+1];
          }
        }
        else
        {
          i= i+2;
          if (i>=toalN)
          {
            i ==toalN-1;
          }
          else
          {

          sumtil+=array[i+2];
          }

        }

      }

      if (i>=toalN)
      {
        i ==toalN-1;
      }


    }

  }

  // for (auto i1 = vect_1savenegindex.begin(); i1 != vect_1savenegindex.end(); i1++)
  // {
  //   // std::cout << vect_1savenegindex.at(i1) <<" ";
  //   std::cout << *i1 << '\n';
  //
  // }

  std::cout << sumtil << '\n';
  delete []array;
  return 0;
}
