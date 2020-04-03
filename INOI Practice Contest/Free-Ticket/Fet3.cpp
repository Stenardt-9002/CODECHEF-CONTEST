#include <iostream>
#include <stdlib.h>
#include <algorithm>
#define  MAXINF 320000

int distanceminium(long long int dist12[],bool alreadycntfor[],long long int nodes)
{
  long long int min1 = MAXINF,min_indes;
  for (long long int iv = 0; iv < nodes; iv++)
  {
    if (min1>=dist12[iv] && alreadycntfor[iv]==false)
    {


      min1 = dist12[iv];
      min_indes = iv;


    }
  }

  return min_indes;

}


long long int shrtestpathalgo(long long int graph1[231][231],long long int src,long long int nodes)
{
  long long int dist1[nodes];
  bool alreadyaccountfor[nodes];


  for (long long int i = 0; i < nodes; i++)
  {
    dist1[i] = MAXINF;
    alreadyaccountfor[i] = false;

  }


  dist1[src] = 0;
  for (long long int cont1 = 0; cont1 < nodes-1; cont1++)
  {
    long long int ymin1 = distanceminium(dist1,alreadyaccountfor,nodes) ;
    alreadyaccountfor[ymin1] = true;
    for (long long int iv1 = 0; iv1 < nodes; iv1++)
    {
      if (alreadyaccountfor[iv1]==false && graph1[ymin1][iv1]!=0 && dist1[ymin1]!=MAXINF&& dist1[ymin1]+graph1[ymin1][iv1]<dist1[iv1])
      {
        dist1[iv1] = dist1[ymin1]+graph1[ymin1][iv1];

      }

    }



  }
  long long int maxfind=0;
  for (long long int i = 0; i < nodes; i++)
  {
    if(dist1[i]>maxfind && dist1[i]!=MAXINF)
    {
      maxfind = dist1[i];
    }
  }
//std::cout << maxfind << '\n';
  return maxfind;

}







 int main(int argc, char const *argv[])
{

  long long int nodes,edges;
  long long int tmp1,tmp2;
  long long int graph1[231][231];

  std::cin >> nodes>>edges;
  for (long long int i = 0; i < nodes; i++)
  {
    for (long long int j = 0; j < nodes; j++)
    {
      graph1[i][j] = 0;
      // std::cout << graph1[i] << '\n';

    }


  }




  for (long long int i = 0; i < edges; i++)
  {
    std::cin >> tmp1;
    std::cin >> tmp2;
    std::cin >> graph1[tmp1-1][tmp2-1];
    graph1[tmp2-1][tmp1-1] = graph1[tmp1-1][tmp2-1];

  }
  long long int returnval,r1val =0;

  for (long long int i = 0; i < nodes; i++)
  {
    // int shrtestpathalgo(int **graph1,int src,int nodes)
    returnval = shrtestpathalgo(graph1,i,nodes);
    if (r1val<returnval)
    {
      r1val = returnval;

      /* code */
    }


  }

  std::cout << r1val << '\n';

  return 0;
}
