//Approach-2 (simply dividing and checking recursively)
//T.C : O(log3(n))
//S.C : O(1)
class Solution {
public:
    bool isPowerOfFour(int n) {
       if(n <= 0) {
            return false;
        }
        else if(n == 1) {
            return true;
        }
        return n%4 == 0 && isPowerOfFour(n/4);  
    }
};

