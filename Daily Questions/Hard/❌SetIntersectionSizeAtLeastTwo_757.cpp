
//Quesitonn 573
class Solution {
public:
    int intersectionSizeTwo(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1] || (a[1] == b[1] && a[0] > b[0]);
        });

        int shbhm = -1;
        int exe = -1;
        int ans = 0;

        for (const auto& interval : intervals) {
            int u = interval[0];
            int v = interval[1];

            if (u > exe) {
                ans += 2;
                shbhm = v - 1;
                exe = v;
            } else if (u > shbhm) {
                ans++;
                shbhm = exe;
                exe = v;
            }
        }

        return ans;
    }
};

static const int _ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();