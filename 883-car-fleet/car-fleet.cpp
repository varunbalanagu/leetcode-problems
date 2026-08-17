class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();

        vector<pair<int, double>> cars;

        for (int i = 0; i < n; i++) {
            double time = (double)(target - position[i]) / speed[i];
            cars.push_back({position[i], time});
        }

        // Sort according to position
        sort(cars.begin(), cars.end());

        stack<double> st;

        // Start from the car closest to target
        for (int i = n - 1; i >= 0; i--) {
            double time = cars[i].second;

            // This car cannot catch the fleet ahead
            if (st.empty() || time > st.top()) {
                st.push(time);
            }
            // If time <= st.top(), it catches the fleet ahead
        }

        return st.size();
    }
};