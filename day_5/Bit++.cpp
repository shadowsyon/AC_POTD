#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,result=0;
    #include <string> 
    std::string a;
    cin >> n;
    if (n<1 || n>150){
        return 1;
    }
    char arr[n];
    for(int i=0;i<n;i++){
        cin >> a;
        if (a=="++X" || a=="X++"){
            result += 1;
        }
        else if (a=="X--" ||a=="--X"){
            result -= 1;
        }
        else{
            return 1;
        }
    }
    cout << result;
    return 0;
}
