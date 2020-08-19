#include<iostream>

typedef long long int lld;
using namespace std;

lld dp1[305][305][305][2] = { };

int main(int argc, char const *argv[])
{
    
    lld row,col,dlim;
    cin>>row>>col>>dlim;
    lld **arr1 = new lld*[row];
    for (lld i1 = 0; i1 < row; i1++)
    {
        arr1[i1] = new lld[col];
        for (lld j1 = 0; j1 < col; j1++)
        {
            cin>>arr1[i1][j1];
        }
        
    }


    // lld ****dp1 = new lld***[row+1]; 


    // for (lld i1 = 0; i1 < row+1; i1++)
    // {
    //     dp1[i1] = new lld**[col+1];
    //     for (lld j1 = 0; j1 < col+1; j1++)
    //     {
    //         dp1[i1][j1] = new lld*[dlim+1];

    //         for (lld k1 = 0; k1 <= dlim; k1++)
    //         {

    //             dp1[i1][j1][k1] = new lld[2]; //up or down  || left or fight
    //             for (lld l1 = 0; l1 < 2; l1++)
    //             {
                    
    //                 dp1[i1][j1][k1][l1] = 0;
    //             }
                
    //         }
            
    //     }
        
    // }

//though only row x col is usable row+1,col+1 is accesses thus allocated




    // 0 is for down 1 is for right 
    
for (lld allp = 0; allp <= dlim; allp++)
{
    
    // for (lld alldir = 0; alldir < 2; alldir++)
    // {
    //     dp1[row-1][col-1][allp][alldir] = 1;
        
    // }
    dp1[row-1][col-1][allp][0] = dp1[row-1][col-1][allp][1] = 1;
}


//end dir
    // dp1[row][col]

// // last row 

// for (lld colvar = col-2; colvar >=0; colvar--)
// {
//     // for (lld dlimvar = dlim-1; dlimvar >=0; dlimvar--)
//     for (lld dlimvar = 0; dlimvar <dlim; dlimvar++)
//     {
//         dp1[row-1][colvar][dlimvar][0] = dp1[row-1][1+colvar][dlimvar+1][0];

//         dp1[row-1][colvar][dlimvar][1] = dp1[row-1][1+colvar][1][0];

//     }
    
// }


// // // //last column
// for (lld rowvar = row-2; rowvar >=0; rowvar--)
// {
//     // for (lld dlimvar = dlim-1; dlimvar >=0; dlimvar--)
//     for (lld dlimvar = 0; dlimvar <dlim; dlimvar++)
//     {
//         dp1[rowvar][col-1][dlimvar][0] = dp1[1+rowvar][col-1][1][1];

//         dp1[rowvar][col-1][dlimvar][1] = dp1[1+rowvar][col-1][1+dlimvar][1];

//     }
    
// }
// lld sum1 = 0;

    for (lld rowvar = row-1; rowvar >=0; rowvar--)
    {
        for (lld colvar = col-1; colvar >=0; colvar--)
        {
            if (rowvar == row-1 && colvar == col-1)
            {
                continue ;
            }
            // else
            // {
                if (arr1[rowvar][colvar])
                {
                    //limitation case

                    // when actually at limitation the path was actualy equally going back one step and taking right 
                    if (rowvar!=row-1)
                    {
                        dp1[rowvar][colvar][dlim][0] = dp1[rowvar+1][colvar][1][1] ;
                    }
                    if (colvar!=col-1)
                    {
                        dp1[rowvar][colvar][dlim][1] = dp1[rowvar][colvar+1][1][0] ;
                    }
                    

                    for (lld dlimva = 0; dlimva < dlim; dlimva++)
                    {
                        if (rowvar==row-1)
                        {
                            dp1[rowvar][colvar][dlimva][0] = dp1[rowvar][colvar+1][dlimva+1][0] ;
                            dp1[rowvar][colvar][dlimva][1] = dp1[rowvar][colvar+1][1][0] ;
                        }
                        else if(colvar == col-1)
                        {
                            
                            dp1[rowvar][colvar][dlimva][0] =  dp1[rowvar+1][colvar][1][1] ;
                            dp1[rowvar][colvar][dlimva][1] = dp1[rowvar+1][colvar][dlimva+1][1] ;
                        }
                        else
                        {
                            
                            dp1[rowvar][colvar][dlimva][0] = dp1[rowvar][colvar+1][dlimva+1][0] + dp1[rowvar+1][colvar][1][1] ;
                            dp1[rowvar][colvar][dlimva][1] = dp1[rowvar+1][colvar][dlimva+1][1] + dp1[rowvar][colvar+1][1][0] ;    

                        }
                        
                        
                    }
                    



                }
                
            // }
            

        }

    }
    




    cout<<dp1[0][0][0][0]<<endl;










// for (lld i1 = 0; i1 < row+1; i1++)
//     {
//         for (lld j1 = 0; j1 < col+1; j1++)
//         {
//             // dp1[i1][j1] = new lld*[dlim];

//             for (lld k1 = 0; k1 <= dlim; k1++)
//             {


//             //   delete[] dp1[i1][j1][k1];
//               delete[] dp1[i1][j1][k1];

                
//             }
//             delete [] dp1[i1][j1];
            
//         }
//      delete[] dp1[i1] ;//= new lld**[col];

        
//     }
//     delete []dp1;








    for (lld i1 = 0; i1 < row; i1++)
    {
        delete [] arr1[i1] ;//= new lld[col];
        
    }
    delete []arr1;

    return 0;
}








