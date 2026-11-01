#include <iostream>
#include <vector>
using namespace std;

int findNumbers(vector<int>& nums) {
    int count = 0;
    for (int i = 0; i < nums.size(); i++) {
        int n = nums[i];
        int digits = 0;
        while (n > 0) {
            digits++;
            n = n / 10;
        }
        if (digits % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Numbers with even digits: " << findNumbers(nums) << endl;
    return 0;
}
