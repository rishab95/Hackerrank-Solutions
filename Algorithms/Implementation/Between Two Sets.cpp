#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main(){
    int n,m,g=0,lc=0,ct=0;
    cin>>n>>m;
    int a[n], b[m];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int j=0;j<m;j++)
        cin>>b[j];
    
    for(int j=a[n-1];j<=b[0];j++)
    {
        for(int i=0;i<n;i++)
            if(j%a[i] == 0)
                g++;            
            if(g == n){
                for(int i=0;i<m;i++)
                    if(b[i]%j == 0)
                        lc++;                                     
                
                if(lc == m)
                    ct++;                                  
            }             
        lc= 0, g = 0;
    }
    cout<<ct<<"\n";
    return 0;
}

