#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;



int main(int argc, char const *argv[])
{
  int n ,k;
  cin>>n>>k;
  int count = 1;
  // cout<<n<<k;
  // vector<vector<int>> vec1(n);
  // map<int, int> dick1;
  // dick1.insert(pair<int, int>(0,0));
  //
  // dick1.insert(pair<int, int>(1,0));
  //   dick1.insert(pair<int, int>(2,0));
  //   dick1.insert(pair<int, int>(3,0));
  //   dick1.insert(pair<int, int>(4,0));
  //   dick1.insert(pair<int, int>(5,0));
  //   dick1.insert(pair<int, int>(6,0));
  //   dick1.insert(pair<int, int>(7,0));
  //   dick1.insert(pair<int, int>(8,0));
  //
  //   dick1.insert(pair<int, int>(7,0));
  //   dick1.insert(pair<int, int>(7,0));


  int length1ind,independentcount;
  int inputemp,fristrowlength;
  // map<int,int>
  cin>>fristrowlength;
  vector<int>storevec(fristrowlength);

  // storevec
  for (int ik = 0; ik < fristrowlength; ik++)
  {
    // std::cin >> length1ind;

    cin>>storevec[ik];
    // storevec[fristrowlength] = length1ind;

  }

// cout<<"\n";
//   for (int ik = 0; ik < fristrowlength; ik++)
//   {
//     cout<<" "<<storevec[ik];
//   }





  for (int ij = 1; ij < n; ij++)
  {
    std::cin >> length1ind;
    // cout<<"Volleybol\n"<<length1ind<<"\n";
    // std::vector<int> tem1p(length1ind);
    // std::vector<int> tem1p;
    // int row1

    // vec1[ij] = vector<int>(length1ind);

    independentcount = 0;

    for(int j1=0;j1<length1ind;j1++)
    {
      cin>>inputemp;
      if(std::find(storevec.begin(),storevec.end(),inputemp)!=storevec.end())
      {
        independentcount++;
        printf("\nindependent %d\n",independentcount);
      }


        // vec1[ij].push_back(inputemp);
        // vec1[ij][j1] = inputemp;

      // tem1p[j1] = inputemp;

    }
    if (independentcount>=k)
    {
      count++;
    }
    independentcount = 0;
// cout<<"\n";
//     for(int j1=0;j1<length1ind;j1++)
//     {
//       cout<<vec1[ij][j1]<<" ";
//
//     }


    // for(int j1=0;j1<length1ind;j1++)
    // {
    //   cout<<tem1p[j1]<<" ";
    //
    // }
    // cout<<"\n";
    // vec1.push_back(tem1p);
    // tem1p.clear();
  }

  // cout<<"\n";

  // for (int ij = 0; ij < n; ij++)
  // {
  //   // std::cin >> length1ind;
  //   // std::vector<int> tem1p(length1ind);
  //   cout<<vec1[ij].size()<<"\n";
  //   for(unsigned int j1=0;j1<vec1[ij].size();j1++)
  //   {
  //     // cin>>inputemp;
  //     // tem1p.push_back(inputemp);
  //       cout<<vec1[ij][j1]<<" ";
  //   }
  //   // cout<<"\n";
  //   // inputemp.push_back(tem1p);
  // }



  cout<<"ans:"<<count;

  return 0;
}
