//coding ninja (pair sum) 

int pairSum(vector<int> &arr, int n, int target) {
    unordered_map<int, int> mp;
    int count = 0;

    for(int i = 0; i < n; i++) {
        int com = target - arr[i];

      
        if(mp.find(com) != mp.end()) {
            count += mp[com];
        }

        mp[arr[i]]++;
    }

    return count > 0 ? count : -1;
}
