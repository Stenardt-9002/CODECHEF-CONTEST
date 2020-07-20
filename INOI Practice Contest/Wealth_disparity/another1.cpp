#include<iostream>
#include<algorithm>
// # include <bits/stdc++.h>
#include<queue>
#include<vector>
typedef long long int lld;

using namespace std;

lld max1(lld i,lld j)
{
    if (i>j)
    {
        return i;
    }
    return j;
    
}


int main(int argc, char const *argv[])
{
    lld n;
    cin>>n;
    lld *values;
    lld root_idx = -1;
    values = new lld[n];
    // vector<lld> *tree;
    // tree = new vector<lld>[n];
    vector<vector<int>> tree(n+1);

    for (int i = 0; i < n; i++)
    {
        cin>>values[i];
    }


    lld *parentlist1;
    parentlist1 = new lld[n];
    for (lld i = 0; i < n; i++)
    {
        cin>>parentlist1[i];
        if (parentlist1[i]==-1)
        {
            root_idx = i;            
        }
        else
        {
            tree[parentlist1[i]-1].push_back(i); //index taken as 0
        }
        
        //tree
    }

    bool *visted = new bool[n];
   for (lld ij = 0; ij < n; ij++)
    {
        visted[ij] = false;
    }

    lld *new_updatedvalueparent = new lld[n];
    for (lld i1j = 0; i1j < n; i1j++)
    {
        new_updatedvalueparent[i1j] = values[i1j];
    }//copying stuff
    long finalanswer = -100000;


    queue<int> q;
    q.push(root_idx);
    long noedmain,noedchild;

    while (!q.empty())
    {
        noedmain = q.front();
        q.pop();
        for (unsigned int i12 = 0; i12 < tree[noedmain].size(); i12++)
        {//going through childre
 
            noedchild = tree[noedmain][i12];
            if (!visted[noedchild])
            {
                q.push(noedchild);
                visted[noedchild] = true;//done
                finalanswer = max1(finalanswer,(new_updatedvalueparent[noedmain]-values[noedchild]));
                new_updatedvalueparent[noedchild] = max(values[noedchild],new_updatedvalueparent[noedmain]) ;//if individual value is smaller than parent than copy the parent value

            }
            
        }
        
    }
    cout<<finalanswer;    
   delete [] parentlist1;delete [] values;
   delete [] visted;delete [] new_updatedvalueparent;
//    delete [] tree;

    return 0;
}

