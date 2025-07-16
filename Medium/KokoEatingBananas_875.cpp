class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi = *max_element(piles.begin(), piles.end());
        int low = 1, high = maxi;

        while (low <= high) {
            long long mid = low + (high - low) / 2;
            if (findhour(piles, mid) <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }

private:
    long long findhour(vector<int>& piles, long long mid) {
        long long hr = 0;
        for (int i = 0; i < piles.size(); i++) {
            hr += (piles[i] + mid - 1) / mid;
        }
        return hr;
    }
};
