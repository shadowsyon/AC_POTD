#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,k,a,result=0;
    cin >> n;
    if (n<1 || n>50){
        return 1;
    }
    cin >> k;
    if (k<1 || k>50){
        return 1;
    }
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> a;
        arr[i]=a;
        if (a<0 || a>100){
            return 1;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=arr[k-1] && arr[i]!=0){
            result++;
        }
    }
    cout << result;
    return 0;
}
