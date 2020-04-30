

#include <iostream>
#include <algorithm>
typedef long long int lld;


using namespace std;


int main(int argc, char const *argv[])
{

  lld numbte,i,max1=0;
  lld *arrau1;
  std::cin >> numbte;
  i=0;
  arrau1 = new lld[numbte];
  while (i<numbte)
  {
    std::cin >> arrau1[i++];

  }
  sort(arrau1,arrau1+numbte);
  i=0;
  while (i<numbte)
  {
    if((arrau1[i]*(numbte-i))>max1)
    {
      max1 = arrau1[i]*(numbte-i);
    }
    i++;

  }
  std::cout << endl<<max1 << '\n';


  delete[] arrau1;

  return 0;
}
