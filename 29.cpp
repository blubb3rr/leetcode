class Solution {
public:
    int divide(int dividend, int divisor) {
        if (1 == divisor)
            return dividend;
        
        if (-1 == divisor)
        {
           return dividend == INT_MIN ? INT_MAX : -dividend;
        }
        if (1 == dividend)
            return 0;
        
        return dividend/divisor;
        
    }
};