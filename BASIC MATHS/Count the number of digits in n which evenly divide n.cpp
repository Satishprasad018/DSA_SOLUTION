class Solution{
public:
    int evenlyDivides(int N){
        
        int count = 0;
        int Num = N;
        int rem = 0;
        
        while(Num > 0){
            
            rem = Num % 10;
            
            if(rem != 0 && N%rem == 0){
                count++;
            }
            
            Num = Num / 10 ;
        }
        
        return count;
    }
};
