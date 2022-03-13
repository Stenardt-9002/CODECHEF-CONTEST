// https://www.codechef.com/MARCH221C/submit/WORDLE

// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	string word1, guesword ;
	int testca ;
	cin>>testca ;
	string ans1="bbbbb";
	for(int i1=0;i1<testca;i1++)
	{
	    cin>>word1>>guesword ;
	    for(int j1 =0;j1<5;j1++)
	    {
	        if(word1[j1]==guesword[j1])
	            ans1[j1] = 'g';
	       else
	            ans1[j1] = 'b';
	    }
	    cout<<ans1<<endl ;
	}
	return 0;
}
