#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
int reverse(int num){
	int reverse =0;
	int rev=0;
	while(num){
		rev = num%10;
		num = num/10;
		reverse = reverse*10 + rev;
	}
	return reverse;
}


int main() {
    int m, n;
    int x;
    cin>>m>>n>>x;
    int c = 0;
    for(int i=m;i<=n;i++){
        if((abs(i-reverse(i)))%x ==0){
			c++;
		}
	}
    cout<<c<<"\n";
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
