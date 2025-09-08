class Solution {
public:

    bool check0(int i){
        while(i){
            if(i%10 == 0) return true;
            i/=10;
        }
        return false;
    }
    vector<int> getNoZeroIntegers(int n) {
        int i = 1;
        while(check0(i)||check0(n-i))i++;
        return {i,n-i};
    }
};