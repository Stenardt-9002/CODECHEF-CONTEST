#include <iostream>
// #include <stdji>
typedef long long int lld;
using namespace std;

int main(int argc, char const *argv[])
{

  int testcase1;
  std::cin >> testcase1;
  lld a,b,c,d;
  double ma12l;
  while (testcase1--)
  {
    std::cin >> a>>b>>c>>d;
    // if ((a+c==b+d)||(a+d==b+c))
    // {
    //   std::cout << "YES" << '\n';
    // }
    // else
    // {
    //   std::cout << "NO" << '\n';
    // }

    // a is always small
    if (a>b)
    {
      a = a-b;
    }

    else
    {
      a = b-a;
    }

    if (d>c)
    {
      d = d-c;
    }

    else
    {
      d = c-d;
    }
    if (d!=0)
    {
      ma12l = ((float)(a))/((float)(d));
    }


    // std::cout <<"OK\n"<< ma12l << '\n';
    // lld test1 = a/d;
    // std::cout << test1 << '\n';

        if (d!=0)
        {
          if((ma12l == a/d)||a==0)
          {std::cout << "YES" << '\n';}
          else
          {
            std::cout << "NO" << '\n';

          }
        }
        else
        {
          std::cout << "NO" << '\n';
        }




  }


  return 0;
}
