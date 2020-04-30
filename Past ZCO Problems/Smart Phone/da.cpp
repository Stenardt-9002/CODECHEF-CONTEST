
#include <iostream>
typedef long long int lld;

using namespace std;


int main(int argc, char const *argv[])
{

  lld numbte,i,temp1,swapva;
  lld *arrau1;
  std::cin >> numbte;
  i=0;
  arrau1 = new lld[numbte];
  while (i<numbte)
  {
    std::cin >> arrau1[i++];
    //sort
    temp1 = i-1;
    // std::cout << "\n temp1val " << temp1;
    // std::cout << "\n temp2val " <<
    // std::cout << "\n tempval " << temp1;
    // std::cin >> swapva;

    while (temp1>0&&arrau1[temp1]<arrau1[temp1-1])
    {
          swapva = arrau1[temp1-1];
          arrau1[temp1-1] = arrau1[temp1];
          arrau1[temp1] = swapva;
          temp1--;
          // arrau1[temp1+1] =
    }



  }
  i=0;
  lld max= 0;
  std::cout << '\n';
  while (i<numbte)
  {

    std::cout << arrau1[i]<<" ";i++;

  }

  std::cout << '\n';

  i=0;

  while (i<numbte)
  {
    if(((numbte-i)*(arrau1[i]-1))>max)
    {
      max = (numbte-i)*(arrau1[i]);
    }
    i++;
  }
  std::cout <<max;


  delete[] arrau1;

  return 0;
}
