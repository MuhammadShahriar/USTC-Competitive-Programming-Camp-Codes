class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> st;
        for ( auto u : nums ) st.insert(u);
        return st.size() != nums.size();
    }
};