//Question 8  june26
class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int minFinishTime = INT_MAX;

        for(int i = 0; i < landStartTime.size(); i++) {
            for(int j = 0; j < waterStartTime.size(); j++) {
                
                // --- PLAN A: Land ride first ---
                int landFinish = landStartTime[i] + landDuration[i];
                int actualWaterStart = max(landFinish, waterStartTime[j]);
                int planA = actualWaterStart + waterDuration[j];

                // --- PLAN B: Water ride first ---
                int waterFinish = waterStartTime[j] + waterDuration[j];
                int actualLandStart = max(waterFinish, landStartTime[i]);
                int planB = actualLandStart + landDuration[i];

                
                minFinishTime = min({planA, planB, minFinishTime });
            }
        }
        return minFinishTime;
    }
};