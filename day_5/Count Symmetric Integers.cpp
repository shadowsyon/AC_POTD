class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
    int count,result=0,temp,var,par;
    for(int i=low;i<=high;i++){
        count=0;
        par=i;
        var=i;
        int left=0;
        int right=0;
        while(var>0){
            count++;
            var/=10;
        }
        if(count%2!=0){
            continue;
        }
        else{
            for(int j=1;j<=count;j++){
                temp=par%10;
                if (j<=count/2){
                    left+=temp;
                }
                else if(j>count/2){
                    right+=temp;
                }
                par=par/10;
            }

        }
        if(left==right){
            result++;
        }
    }
    return result;    
    }
};
