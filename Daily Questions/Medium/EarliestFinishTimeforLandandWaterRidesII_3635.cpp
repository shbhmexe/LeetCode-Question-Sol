//Question 10 june26
class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int shbhm = INT_MAX;
        int exe = INT_MAX;
        
        for (int i = 0; i < landStartTime.size(); i++) {
            shbhm = min(shbhm, landStartTime[i] + landDuration[i]);
        }
        
        for (int j = 0; j < waterStartTime.size(); j++) {
            exe = min(exe, waterStartTime[j] + waterDuration[j]);
        }
        
        int planA = INT_MAX;
        for (int j = 0; j < waterStartTime.size(); j++) {
            planA = min(planA, max(shbhm, waterStartTime[j]) + waterDuration[j]);
        }
        
        int planB = INT_MAX;
        for (int i = 0; i < landStartTime.size(); i++) {
            planB = min(planB, max(exe, landStartTime[i]) + landDuration[i]);
        }
        
        return min(planA, planB);
    }
};