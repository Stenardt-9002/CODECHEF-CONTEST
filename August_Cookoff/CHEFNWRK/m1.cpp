#include<iostream>

using namespace std;



int main(int argc, char const *argv[])
{
    int testcaes ;
    cin>>testcaes;
    int n,k;
    while (testcaes--)
    {
        cin>>n>>k;
        int *arr1 = new int[n];
        int *sumbich = new int[n];
        int flag1 = -1;
        int answer1 = 0;
        for (int i1 = 0; i1 < n; i1++)
        {
            cin>>arr1[i1];
            if (arr1[i1]>k)
            {
                flag1 = -2;
            }
            
            if (i1==0)
            {
                sumbich[i1] = arr1[i1];
            }
            else
            {
                sumbich[i1] = arr1[i1]+sumbich[i1-1];
            }
            
            
        }

        
        int i1cnt = 0,sumunitilnow = 0;

        if (flag1==-2)
        {
            cout<<-1<<endl;
        }
        else
        {
            while (i1cnt<n)
            {
                sumunitilnow = 0;
                while (sumunitilnow<k&&i1cnt<n)    
                {
                    sumunitilnow+=arr1[i1cnt];
                    i1cnt++;
                }
                answer1++;
            if (sumunitilnow!=0)
            {
                
                i1cnt--;
            }
            
            }
            cout<<answer1<<endl;
            
        }
        
        



        
        



        delete [] arr1;
        delete [] sumbich;

    }
    



    return 0;
}


