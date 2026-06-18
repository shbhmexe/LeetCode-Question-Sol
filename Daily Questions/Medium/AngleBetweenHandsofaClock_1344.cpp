//Question 52 june26
class Solution {
public:
    double angleClock(int hour, int minutes) {
        hour = hour % 12;
        double minAngle = minutes * 6.0;
        double hourAngle = (hour * 30.0) + (minutes * 0.5);
        double diff = abs(hourAngle - minAngle);
        if(diff > 180.0){
            diff = 360.0 - diff;
        } 
        return diff;
    }
};