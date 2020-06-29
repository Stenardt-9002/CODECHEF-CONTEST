#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;


int main(int argc, char const *argv[])
{

  int n ,k;
  cin>>n>>k;

  int count = 0;
  int independentcount = 0;
  vector<vector<int>> vect(n);
  int independentlength;

  //init matrix relatio between family
  int **matrix1 = new int*[n];
  for (int ij = 0; ij < n; ij++)
  {
    matrix1[ij] = new int[n];
    for (int ji = 0; ji < n; ji++)
    {
      matrix1[ij][ji] = 0 ;
      if (ij==ji)
      {
        matrix1[ij][ji] = 1 ;

      }
    }

  }





  for (int trrow = 0; trrow < n; trrow++)
  {
    std::cin >> independentlength;
    vect[trrow] = vector<int>(independentlength);

    for (unsigned int tr = 0; tr < vect[trrow].size(); tr++)
    {
      cin>>vect[trrow][tr];

    }

    //matrix claulation
    //fill matrix for that particlular relation with all that have occured in matrix



    independentcount = 0;
    //traverse every row above it and relate it with matrix (relation check)
    for (int trmatrow =trrow-1 ; trmatrow >= 0; trmatrow--)
    {
        for (unsigned trthrovec = 0; trthrovec < vect[trmatrow].size(); trthrovec++)
        {

          if(std::find(vect[trrow].begin(),vect[trrow].end(),vect[trmatrow][trthrovec])!=vect[trrow].end())
          {
            independentcount++;//find how many intersect if greate than k
          }
        }


        if (independentcount>=k)
        {
          /* code */
          matrix1[trrow][trmatrow]=matrix1[trmatrow][trrow] = 1;
        }
        independentcount = 0;
    }


  }


//test



//analyse matrix
// get data where matrix is zero and not zero
//create update matrix
// for every successfamily member check if related to non family member
// update value and its mirror
int **m2atrix = new int*[n];
int **m3atrix = new int*[n];



for (int ij = 0; ij < n; ij++)
{
  m2atrix[ij] = new int[n];
  m3atrix[ij] = new int[n];

  for (int ji = 0; ji < n; ji++)
  {
    m2atrix[ij][ji] = matrix1[ij][ji] ;
  }

}
//relation of relation continue while no change
  std::vector<int> successfamily;
  std::vector<int> unccessfamily;
for (int ij = 0; ij < n; ij++)
{

  for (int ji = 0; ji < n; ji++)
  {
    if (m2atrix[ij][ji]==0)
    {
      unccessfamily.push_back(ji);
    }
    else if (m2atrix[ij][ji]==1 && ij!=ji)
    {
      successfamily.push_back(ji);
    }

  }


  std::vector<int>::iterator it1,it2 ;


  for ( it1 = successfamily.begin(); it1!=successfamily.end(); it1++)
  {
    for ( it2 = unccessfamily.begin(); it2!=unccessfamily.end(); it2++)
    {
      if (m2atrix[*it1][*it2]==1)
      {
        m2atrix[*it2][ij] = m2atrix[ij][*it2] = 1;
        
      }
    }
  }


  successfamily.clear();unccessfamily.clear();

}

int newnomore = 0;
do
{

        for (int ij = 0; ij < n; ij++)
        {
            for (int ji = 0; ji < n; ji++)
            {
                m3atrix[ij][ji] =  m2atrix[ij][ji];

            }
        }
        



        for (int ij = 0; ij < n; ij++)
        {

          for (int ji = 0; ji < n; ji++)
          {
              if (m3atrix[ij][ji]==0)
              {
              unccessfamily.push_back(ji);
              }
              else if (m3atrix[ij][ji]==1 && ij!=ji)
              {
              successfamily.push_back(ji);
              }

          }


          std::vector<int>::iterator it1,it2 ;


          for ( it1 = successfamily.begin(); it1!=successfamily.end(); it1++)
          {
              // cout<<" "<<*it;
              for ( it2 = unccessfamily.begin(); it2!=unccessfamily.end(); it2++)
              {
              if (m3atrix[*it1][*it2]==1)
              {
                  m3atrix[*it2][ij] = m3atrix[ij][*it2] = 1;
     
              }
              }
          }


          successfamily.clear();unccessfamily.clear();

        }
int same = 1;
    for (int ij1 = 0; ij1 < n; ij1++)
    {
        for (int ji1 = 0; ji1 < n; ji1++)
        {
            if (m3atrix[ij1][ji1]!=m2atrix[ij1][ji1])
            {
                // newnomore = 1;
                same = 0;
            }
            
            
        }
        
    }
    if (same == 1)
    {
      newnomore = 1;
    }
    
    
} 


while (newnomore == 0);



for (int matvar2 = 0; matvar2 < n; matvar2++)
{

   count+=m2atrix[0][matvar2];


}
cout<<count;





for (int ij = 0; ij < n; ij++)
{
  delete []matrix1[ij];
  delete []m2atrix[ij];
  delete []m3atrix[ij];

}




delete [] matrix1;
delete [] m2atrix;
delete [] m3atrix;


  return 0;
}