#include <iostream>
#include <vector>
#include <string>
using namespace std;

int mostWordsFound(vector<string>& sentences) {
    int maxWords = 0;
    for (int i = 0; i < sentences.size(); i++) {
        int words = 1;
        for (int j = 0; j < sentences[i].size(); j++) {
            if (sentences[i][j] == ' ') {
                words++;
            }
        }
        if (words > maxWords) {
            maxWords = words;
        }
    }
    return maxWords;
}

int main() {
    int n;
    cout << "Enter number of sentences: ";
    cin >> n;
    cin.ignore();
    vector<string> sentences(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter sentence " << i + 1 << ": ";
        getline(cin, sentences[i]);
    }

    cout << "Maximum words in a sentence: " << mostWordsFound(sentences) << endl;
    return 0;
}
