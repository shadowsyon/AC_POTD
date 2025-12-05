#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,t,i,result;
    cin >> t;
    if (t<1 || t>100){
        return 1;
    }
    
    for(i=0;i<t;i++){
        cin >> n;
        if (n<1 || n>100){
            return 1;
        }
        else if(n%2!=0){
            result=0;
        }
        else if(n%2==0){
            result=n/4+1;   
        }
        cout << result << endl;
    }
    return 0;
}
