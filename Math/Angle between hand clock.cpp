class Solution {
public:
    double angleClock(int hour, int minutes) {
        double angle=minutes*6.0;
        double hourangle=(hour%12)*30.0+minutes*0.5;

        double diff=abs(hourangle-angle);
        return min(diff,360.0-diff);
    }
};