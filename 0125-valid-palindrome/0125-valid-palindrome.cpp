class Solution {
public:
    bool isPalindrome(string s) {
        
        int n = s.size();
        int left = 0;
        int right = n-1;
        while(left<right){
            
            if(s[left]==' ' || !isalnum(s[left])) left++;
            else if(s[right]==' '|| !isalnum(s[right])) right--;
            else{
                char a =tolower(s[left]);
                char b = tolower(s[right]);
                if(a!=b) return false;
                else{
                    left++;
                    right--;
                }
            }
        }
        return true;
    }
};
