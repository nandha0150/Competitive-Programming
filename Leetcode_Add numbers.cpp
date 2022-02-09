// Best solution

class Solution {
public:
    int addDigits(int num) {
        if(num==0) return 0;
        return num%9==0?9:num%9;
    }
};

// Lengthier solution

class Solution {
public:
    int addDigits(int num) {
        int root= 0;
        while(num>0){
            root+= num%10;
            num=num/10;
            
            if(num==0 && root>9){
                num = root;
                root= 0;
            }
        }
        return root;
    }
};