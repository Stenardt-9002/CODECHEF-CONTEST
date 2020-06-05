#include <iostream>
typedef long long int lld;




using namespace std;

int main(int argc, char const *argv[])
{
  lld N,MaxVal;
  lld step1=-1;
  lld *stac_k;
  lld pointer1 = 0;//start to left
  lld craneval = 0;//empty
  cin>>N>>MaxVal;
  stac_k = new lld[N];
  for (lld ij = 0; ij < N; ij++)
  {
    std::cin >> stac_k[ij];
  }

  while (step1!=0)
  {
    cin>>step1;
    if (step1==0)
    {
      break;
    }
    else if (step1==1)
    {
      if (pointer1!=0)
      {
        pointer1--;

      }




    }
    else if (step1==2)
    {

      if (pointer1!=N-1)
      {
        pointer1++;

      }

    }
    else if (step1==3)
    {

      if (craneval==0)
      {
        if (stac_k[pointer1]!=0)
        {
          stac_k[pointer1]--;
          craneval++;//set it 1

        }
      }



    }
    else if (step1==4)
    {
      if (craneval==1)
      {
        if (stac_k[pointer1]!=MaxVal)
        {
          stac_k[pointer1]++;
          craneval--;

        }
      }

    }
  }


// std::cout << "Look Where" << '\n';
for (lld ij = 0; ij < N; ij++)
{

  std::cout << stac_k[ij]<<" ";

}


delete[] stac_k;


  return 0;
}
