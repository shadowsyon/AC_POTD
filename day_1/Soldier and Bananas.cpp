#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,k,w,i,temp,borrow;
    cin >> k;
    if (k<1){
        return 1;
    }
    cin >> w;
    if (w<0 || w>1000000000){
        return 1;
    }
    cin >> n;
    borrow=0;
    if (n<0 || n>1000){
        return 1;
    }
    for(i=1;n>0;i++){
        temp=0;
        if (w-i*k>0){
            w=w-i*k;
        }
        else {
            borrow=borrow+i*k;    
        }
        n--;
    }
    if(borrow==0){
        cout << "0";
    }
    else{
        cout << borrow-w;
    }
    return 0;
}
