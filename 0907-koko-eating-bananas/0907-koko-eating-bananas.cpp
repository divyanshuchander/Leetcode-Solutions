class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int answer = -1;
        int n = piles.size();
        int low = 1;
        int high = INT_MIN;

        for(int i = 0 ;i <n;i++){               //O(N)
            high = max(high , piles[i]);
        }

        while(low<=high){
            int mid = low +((high - low)/2);
            int timeTakenToEat = 0;
            for(auto i : piles){
                timeTakenToEat += ceil((double)i/mid);      //youd have to cast it
                if(timeTakenToEat >h) break;        //to avoid overflow
            }
            if(timeTakenToEat<=h){
                answer = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return answer;
    }
};