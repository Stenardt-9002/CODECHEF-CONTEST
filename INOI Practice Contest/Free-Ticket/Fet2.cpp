
#include <iostream>
#include <stdlib.h>
#include <algorithm>
#define  MAXINF 32000


using namespace std;

int calnearmindist(int dis12[],bool notalreaduincluded[],int nodes)
{
  int min1 = MAXINF,min_index_pos = -1;int oj;
  for (int iv = 0; iv < nodes; iv++)
  {
    if (notalreaduincluded[iv]==false && dis12[iv]<=min1)
    {
      min1 = dis12[iv];min_index_pos = iv;
    }

  }
  // std::cin >> oj;
  // std::cout << min_index_pos << '\n';
  // for (int i = 0; i < nodes; i++)
  // {
  //   std::cout << " "<<dis12[i];
  // }
  // std::cout  << '\n';
  // for (int i = 0; i < nodes; i++)
  // {
  //   std::cout << " "<<notalreaduincluded[i];
  // }
  // std::cout  << '\n';
  //
  // std::cin >> oj;
  return min_index_pos;

}









int main(int argc, char const *argv[])
{
  int nodes,edges;
  int tmp1,tmp2;
  long long int graph1[231][231];

  std::cin >> nodes>>edges;
  // long long int graph1[nodes][nodes];

  for (int i = 0; i < nodes; i++)
  {
    for (int j = 0; j < nodes; j++)
    {
      graph1[i][j] = 0;
      // std::cout << graph1[i] << '\n';

    }


  }

  long long int tempval = 0;
  for (int i = 0; i < edges; i++)
  {
    std::cin >> tmp1;
    std::cin >> tmp2;
    std::cin >> graph1[tmp1-1][tmp2-1];
    graph1[tmp2-1][tmp1-1] = graph1[tmp1-1][tmp2-1];

  }

///change src
int ymin;//nearby nodes shortest distance
int src = 0;
int dis1[nodes];
bool youalreadycount[nodes];

// for(int srcvar = 0;srcvar<nodes;srcvar++)
// {
int srcvar = 1;
    for (int i = 0; i < nodes; i++)
    {
      dis1[i] = MAXINF;
      youalreadycount[i] = false;
    }
    src = srcvar;
    dis1[src] = 0;
    for (int cntvar = 0; cntvar < nodes; cntvar++)
    {
      ymin = calnearmindist(dis1,youalreadycount,nodes);//jet index
      youalreadycount[ymin] = true; ///you done
      for (int ij1 = 0; ij1 < nodes&&ij1!=cntvar ; ij1++)
      {
        if (youalreadycount[ij1]==false && graph1[cntvar][ij1]!=0 && dis1[cntvar]!=MAXINF && dis1[cntvar]+graph1[cntvar][ij1]<dis1[ij1])
        {
          /* code */
          dis1[ij1]=dis1[cntvar]+graph1[cntvar][ij1];
        }

      }

      // std::cout << "\nSerial TIme" << '\n';
      // for (int i = 0; i < nodes; i++)
      // {
      //   std::cout << " "<< dis1[i];
      // }
      // std::cout << "Serial Time end"<<ymin << '\n';


    }

    //
    // for (int i = 0; i < nodes; i++)
    // {
    //   std::cout << " "<< dis1[i];
    // }
    // std::cout  << '\n';

// }

  // std::cout << max << '\n';

  return 0;
}
