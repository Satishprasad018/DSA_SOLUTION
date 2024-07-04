class Solution {
public:
    bool isPalindrome(int x) {
        int X = x ;
        int units = 0;
        long reverse = 0 ;

        while(x>0){           
           units = x%10 ;
           reverse = reverse * 10 + units ;
           x = x/10 ;
        }

        if(X == reverse)
           return true ;
        else
           return false ; 
    }
};
