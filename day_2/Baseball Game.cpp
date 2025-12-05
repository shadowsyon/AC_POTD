class Solution {
public:
    int calPoints(vector<string>& operations) {
        int sum=0;
        int len=operations.size();
        stack<int> result;
        for(int i=0;i<len;i++){
            if(operations[i]=="D"){
                result.push(result.top()*2);        
            }
            else if(operations[i]=="+"){
                int a = result.top();
                result.pop();
                int b = result.top();
                result.push(a);
                result.push(a+b);
            }
            else if(operations[i]=="C"){
                result.pop();
            }
            else{
                result.push(stoi(operations[i]));
            }
        }
        while (!result.empty()) {
            sum += result.top();
            result.pop();
        }
        return sum;    
    }
};
