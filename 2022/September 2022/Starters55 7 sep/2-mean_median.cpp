#include <iostream>

#include <bits/stdc++.h>
#include<ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/assoc_container.hpp>

using namespace std;

int main() {
	// your code goes here
	
	int testcase ;
    int n;
    cin>>testcase ;
	int mean1,medi1 ;
    while (testcase--)
    {
        cin>>mean1>>medi1 ;
        int arr1[3] = {medi1-1,medi1 ,3*mean1-2*medi1+1} ; 
        // sort(arr1,arr1+3); 
        int start = medi1-1 ;
        while(start>=-1000 && 3*mean1-medi1-start<medi1)
            start-- ;
        arr1[0] = start ;
        arr1[2] = 3*mean1-medi1-start;
        cout<<arr1[0]<<" "<<arr1[1]<<" "<<arr1[2]<<endl;
    }
	return 0;
}