#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n,m,a,row,col,result=0;
    cin >> n;
    if (n<1 || n>1000000000){
        return 1;
    }
    cin >> m;
    if (m<1 || m>1000000000){
        return 1;
    }
    cin >> a;
    if (a<1 || a>1000000000){
        return 1;
    }
    row = (n + a - 1) / a;  
    col = (m + a - 1) / a;
    result=row*col;
    cout << result;
    return 0;
}
