#include <iostream>
#include <vector>
#include <string>
using namespace std;

int finalValueAfterOperations(vector<string>& operations) {
    int x = 0;
    for (int i = 0; i < operations.size(); i++) {
        if (operations[i][1] == '+') {
            x++;
        } else {
            x--;
        }
    }
    return x;
}

int main() {
    int n;
    cout << "Enter number of operations: ";
    cin >> n;
    vector<string> operations(n);
    cout << "Enter operations (++X, X++, --X, X--): ";
    for (int i = 0; i < n; i++) {
        cin >> operations[i];
    }

    cout << "Final value of X: " << finalValueAfterOperations(operations) << endl;
    return 0;
}
