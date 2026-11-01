#include <iostream>
#include <vector>
using namespace std;

vector<int> buildArray(vector<int>& nums) {
    vector<int> ans(nums.size());
    for (int i = 0; i < nums.size(); i++) {
        ans[i] = nums[nums[i]];
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter " << n << " elements (0 to " << n - 1 << ", no repeat): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> ans = buildArray(nums);

    cout << "Result: ";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
