class Solution {
public:
    bool isPalindrome(int x) {
       if(x < 0) return false;

       string s = to_string(x);
       int st = 0, end = s.length() - 1;
       while(st <= end){
       if(s[st] != s[end])
        return false;
        st++;
        end--;
             
        
       } 
    return true;
    }
};