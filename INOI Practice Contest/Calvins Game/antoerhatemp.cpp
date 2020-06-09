// https://www.codechef.com/INOIPRAC/problems/INOI1301
#include <iostream>
#include <algorithm>
#include <vector>
typedef long long int lld;
#ifndef NEGVAL
#define NEGVAL -99999999
#endif
using namespace std;



lld gorforward(lld,lld,lld[],lld[]);
lld gobackward(lld,lld[],lld[]);



int main(int argc, char const *argv[])
{


  lld toalN,strtpos,sumtil=0;
  lld *array;
  std::cin >> toalN>>strtpos;
  strtpos--;
  array = new lld[toalN];
  lld i=0;
  while (i<toalN)
  {
    std::cin >> array[i];

    i++;
  }
//INITIALISED FW BW array
lld *FW,*BW;

  FW = new lld[toalN];BW = new lld[toalN];
  for (lld ivar = 0; ivar < toalN; ivar++)
  { FW[ivar] = NEGVAL;}
  for (lld ivar = 0; ivar < toalN; ivar++)
  { BW[ivar] = NEGVAL;}

  gorforward(toalN-1,strtpos,array,FW);gobackward(toalN-1,array,BW);
  // std::cout << "FORWARD" << '\n';
  // for (lld ivar = 0; ivar < toalN; ivar++)
  // {
  //   cout<<FW[ivar]<<" ";
  //   // sumtil = max(sumtil,tempvar);
  //
  // }
  // std::cout << "BACKWARD" << '\n';
  // for (lld ivar = 0; ivar < toalN; ivar++)
  // {
  //   cout<<BW[ivar]<<" ";
  //   // sumtil = max(sumtil,tempvar);
  //
  // }

  for (lld ivar = strtpos; ivar < toalN; ivar++)
  {
    lld tempvar = FW[ivar]+BW[ivar]-array[ivar];
    sumtil = max(sumtil,tempvar);


  }



  std::cout << sumtil << '\n';

  // gorforward();

  return 0;
}


lld gorforward(lld var,lld k,lld *array,lld *FW)
{
  if(var<k)
  {
    return NEGVAL;
  }
  if (var==k)
  {
    return FW[var]=0;
  }

  if(FW[var]!=NEGVAL)
  {
    return FW[var];
  }
  FW[var] = array[var]+max(gorforward(var-1,k,array,FW),gorforward(var-2,k,array,FW));//DP recursion
  return FW[var];


}


lld gobackward(lld var,lld *array,lld *BW)//use go forware form 1 to k same as backward k to 1
{
  if(var<0)
  {
    return NEGVAL;
  }

  if (var==0)
  {
    BW[var]  = array[var];
    return array[var];
  }

  if(BW[var]!=NEGVAL)
  {
    return BW[var];//different array another than FW
  }



  BW[var] = array[var]+max(gobackward(var-1,array,BW),gobackward(var-2,array,BW));
  return BW[var];


}
