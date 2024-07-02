//hackerearth (game of strength)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MOD = 1000000007;

long long TPower(vector<int> &a, int n) {
    // Find the maximum strength
    int max_strength = *max_element(a.begin(), a.end());

    
    sort(a.begin(), a.end());

   
    long long sum_diff = 0;
    long long prefix_sum = 0;
    
    for (int i = 0; i < n; ++i) {
        
        sum_diff = (sum_diff + (long long)a[i] * i - prefix_sum) % MOD;
        prefix_sum = (prefix_sum + a[i]) % MOD;
    }
    long long overall_power = (sum_diff * max_strength) % MOD;
    return overall_power;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        cout << TPower(a, n) << endl;
    }
    return 0;
}
