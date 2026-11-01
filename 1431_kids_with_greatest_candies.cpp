#include <iostream>
#include <vector>
using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    int maxCandy = 0;
    for (int i = 0; i < candies.size(); i++) {
        if (candies[i] > maxCandy) {
            maxCandy = candies[i];
        }
    }
    vector<bool> ans;
    for (int i = 0; i < candies.size(); i++) {
        if (candies[i] + extraCandies >= maxCandy) {
            ans.push_back(true);
        } else {
            ans.push_back(false);
        }
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter number of kids: ";
    cin >> n;
    vector<int> candies(n);
    cout << "Enter candies of each kid: ";
    for (int i = 0; i < n; i++) {
        cin >> candies[i];
    }
    int extraCandies;
    cout << "Enter extra candies: ";
    cin >> extraCandies;

    vector<bool> ans = kidsWithCandies(candies, extraCandies);

    cout << "Result: ";
    for (int i = 0; i < ans.size(); i++) {
        if (ans[i]) {
            cout << "true ";
        } else {
            cout << "false ";
        }
    }
    cout << endl;
    return 0;
}
