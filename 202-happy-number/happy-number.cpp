class Solution {
public:
    bool isHappy(int n) {
        set<int> series;
        while(n!=1){
            if (series.find(n) != series.end()) return false ;

            series.insert(n);

            int sum = 0;
            while(n>0){
                int digit = n%10;
                sum = sum + (digit*digit);
                n /= 10;
            }
            n=sum;
        }
        return true;
    }
};