class Solution {
public:
    int addDigits(int num) {
        
        while(num/10){
            int sm=0;
            while(num){
                sm += num%10;
                num=num/10;
            }
            num=sm;
        }
        return num;
    }
};