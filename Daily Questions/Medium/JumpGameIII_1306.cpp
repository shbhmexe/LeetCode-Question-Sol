//Question 776
class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        queue<int> q;
        q.push(start);

        while(!q.empty()){
            int curr = q.front();
            q.pop();
            if(arr[curr] == 0) return true;
            if(arr[curr] < 0) continue;

            int left_jump = curr - arr[curr];
            int right_jump = curr + arr[curr];

            arr[curr] = -arr[curr];

            if (left_jump >= 0 && left_jump < arr.size() && arr[left_jump] >= 0) {
                q.push(left_jump);
            }
            if (right_jump >= 0 && right_jump < arr.size() && arr[right_jump] >= 0) {
                q.push(right_jump);
            }
        }
        return false;
    }
};