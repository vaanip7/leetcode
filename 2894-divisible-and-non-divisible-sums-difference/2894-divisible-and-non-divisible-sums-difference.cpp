class Solution {
public:
int num1=0;int num2=0;
    int differenceOfSums(int n, int m) {
        for (int i=0;i<=n;i++){
            if(i%m==0){
                num2+=i;
            }
             else if(!(i%m==0)){
                num1+=i;
            }
            
            }
            return num1-num2;
        }
    
};