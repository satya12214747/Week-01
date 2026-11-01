#include <iostream>
#include <vector>
using namespace std;

vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        ans.push_back(nums[i]);
        ans.push_back(nums[i + n]);
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    vector<int> nums(2 * n);
    cout << "Enter " << 2 * n << " elements: ";
    for (int i = 0; i < 2 * n; i++) {
        cin >> nums[i];
    }

    vector<int> ans = shuffle(nums, n);

    cout << "Shuffled array: ";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
