class Solution {
public:
    bool isPalindrome(int x) {
        long long reminder = 0;
        long long storedInput = x;
        long long ans = 0;
        while(x>0){
            reminder = x%10;
            x = x/10;
            ans = (ans*10)+reminder;
        }
        if(ans==storedInput){
            return true;
        }
        else{
            return false;
        }
    }
};
