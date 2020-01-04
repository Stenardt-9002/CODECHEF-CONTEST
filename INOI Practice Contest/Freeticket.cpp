#include <iostream>
#include <stdlib.h>
#include <algorithm>
#define  MAXINF 99999


using namespace std;


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
      graph1[i][j] = 99999;
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

  for (int k = 0; k < nodes; k++)
  {
      for (int i = k+1; i < nodes; i++)
      {
        for (int j = i+1; j < nodes; j++)
        {
            // graph1[i,j] = std::min(graph1[i,j],(graph1[i,k]+graph1[k,j]));
            if(i<k && k<j)
            {
              tempval = graph1[i][k]+graph1[k][j];
              if (graph1[i][j]>(tempval))
              {
                // graph1[i,j]=(graph1[i,k]+graph1[k,j]);
                graph1[i][j]=tempval;


              }
            }


        }



      }


  }
  long long int max = 0;

  // std::cout << "Graph1" << '\n';
  //
  // for (int i = 0; i < nodes; i++)
  // {
  //   for (int j = 0; j < nodes; j++)
  //   {
  //     std::cout << " "<< graph1[i][j];
  //   }
  //
  //   std::cout << '\n';
  // }

  for (int i = 0; i < nodes; i++)
  {
    for (int j = i+1; j < nodes; j++)
    {
      if (max<graph1[i][j]&& graph1[i][j]!=MAXINF  )
      {
        max = graph1[i][j];
      }
    }
  }


  std::cout << max << '\n';

  return 0;
}
