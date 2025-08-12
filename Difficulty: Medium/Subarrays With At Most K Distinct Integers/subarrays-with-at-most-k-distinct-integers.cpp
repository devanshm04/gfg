class Solution {
public:
    int countAtMostK(vector<int> &arr, int k) {
        int i = 0, j = 0, n = arr.size();
        int ans = 0;
        unordered_map<int, int> mp;

        while (j < n) {
            mp[arr[j]]++;

            // shrink window if distinct count exceeds k
            while (mp.size() > k) {
                mp[arr[i]]--;
                if (mp[arr[i]] == 0) {
                    mp.erase(arr[i]);
                }
                i++;
            }

            // count subarrays ending at j with at most k distinct
            ans += (j - i + 1);
            j++;
        }
        return ans;
    }
};
