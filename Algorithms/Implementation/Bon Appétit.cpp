#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, k,sum=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    int chr;
    cin>>chr;
    int sh = (sum/2-arr[k]/2);
    if(chr==sh){
        cout<<"Bon Appetit\n";
    }else{
        cout<<(chr-sh)<<"\n";
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
