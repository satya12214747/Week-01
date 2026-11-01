#include <iostream>
#include <vector>
using namespace std;

int maximumWealth(vector<vector<int>>& accounts) {
    int maxWealth = 0;
    for (int i = 0; i < accounts.size(); i++) {
        int sum = 0;
        for (int j = 0; j < accounts[i].size(); j++) {
            sum += accounts[i][j];
        }
        if (sum > maxWealth) {
            maxWealth = sum;
        }
    }
    return maxWealth;
}

int main() {
    int m, n;
    cout << "Enter number of customers: ";
    cin >> m;
    cout << "Enter number of banks: ";
    cin >> n;
    vector<vector<int>> accounts(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        cout << "Enter money of customer " << i + 1 << " in " << n << " banks: ";
        for (int j = 0; j < n; j++) {
            cin >> accounts[i][j];
        }
    }

    cout << "Richest customer wealth: " << maximumWealth(accounts) << endl;
    return 0;
}
