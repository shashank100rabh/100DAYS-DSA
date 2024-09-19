//corparate flight bookings
class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> ans(n, 0);  

        int start, end, seats;

        for(int i = 0; i < bookings.size(); i++) {
            start = bookings[i][0];
            end = bookings[i][1];
            seats = bookings[i][2];

            ans[start - 1] += seats;  
            if(end < n) {
                ans[end] -= seats;  
            }
        }

        
        for(int i = 1; i < n; i++) {
            ans[i] += ans[i - 1];
        }

        return ans;
    }
};
