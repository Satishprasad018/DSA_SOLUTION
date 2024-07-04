class Solution {
public:
    int reverse(int x) {
        
        int  units = 0;
        long  reverse = 0 ;
        while(x!=0){
               
          units = x % 10 ;
          reverse = reverse * 10 + units ;
          x=x/10 ;
        }
        
        if(reverse>INT_MAX || reverse<INT_MIN) return 0 ;
        return reverse ;
    }
};
