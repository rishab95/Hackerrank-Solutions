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
    //int n =26;
    int h[26];
    //int x;
    for(int i = 0;i < 26;i++){
       cin >>h[i];
    }
    string word;
    cin >> word;
    long int max = 0;
    for(int i=0;i<word.length();i++){
        int var = (word[i] - 'a');
        if(h[var]>max){
            max = h[var];
        }
    }
    //cout<<max<<"\n";
    long int area = max*(word.length());
    cout<<area<<"\n";
    return 0;
}
