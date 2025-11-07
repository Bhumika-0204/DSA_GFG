vector<int> Smallestonleft(int arr[], int n) {
    set<int> s;              // keeps elements in sorted order
    vector<int> ans;

    for (int i = 0; i < n; i++) {
        auto it = s.lower_bound(arr[i]);  // first element >= arr[i]

        if (it == s.begin())
            ans.push_back(-1);
        else {
            it--;  // move to the previous smaller element
            ans.push_back(*it);
        }

        s.insert(arr[i]);  // insert current element
    }
    return ans;
}
