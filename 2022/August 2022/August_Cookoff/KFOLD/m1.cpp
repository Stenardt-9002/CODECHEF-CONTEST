#include<iostream>
#include<string>

using namespace std;

typedef long long int lld;


int main(int argc, char const *argv[])
{
    int testcase;    
    cin>>testcase;
    while (testcase--)
    {
        int length1string,K;
        cin>>length1string>>K;
        int mainhandle1 = length1string/K;
        string str11,asnwerstring1="";
        int count1 = 0,count0 = 0;

        cin>>str11;
        for (int i1 = 0; i1 < length1string; i1++)
        {
            if (str11[i1]=='0')
            {
                count0++;
            }
            //only 0 and 1
            else
            {
                count1++;
            }
            
            
        }
        // cout<<endl<<str11<<endl;

        if (count0%mainhandle1==0 &&  count1%mainhandle1==0)
        {        
            // if (K%2==0)
            // {
            //     //eben length

            // }
            // else
            // {
            //     //odd length
            // }
            string temp1string = "",temp2string = "";
            int nofone = count1/mainhandle1;
            int noofzero = count0/mainhandle1;
            while (noofzero>0)
            {
                noofzero--;
                temp1string+="0";
            }

            while (nofone>0)
            {
                nofone--;
                temp1string+="1";
            }
            for (unsigned int i3 = 0; i3 < temp1string.length(); i3++)
            {
                temp2string+=temp1string[temp1string.length()-i3-1];
            }
            

            int reverse = 1;
            for (int i12 = 0; i12 < mainhandle1; i12++)
            {
                if (reverse ==1)
                {
                    asnwerstring1+=temp1string;
                }
                else if (reverse==-1)
                {
                    asnwerstring1+=temp2string;
                }
                reverse*=-1;
                
                
            }
            



        }        
        else
        {
            asnwerstring1 = "IMPOSSIBLE";
        }
        
        
    cout<<asnwerstring1<<endl;;
        
    }
    

    return 0;
}




