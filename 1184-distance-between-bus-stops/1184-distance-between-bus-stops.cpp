class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int clockwise = 0;
        int total = 0;

        for (int i = 0; i < distance.size(); i++) {
            total += distance[i];
        }

        if (start > destination)
            swap(start, destination);

        for (int i = start; i < destination; i++) {
            clockwise += distance[i];
        }

        int counterClockwise = total - clockwise;

        return min(clockwise, counterClockwise);
    }
};