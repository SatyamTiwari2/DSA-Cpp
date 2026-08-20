#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    getline(cin, name);

    int start = 0;

    for (int i = 0; i <= name.length(); i++) {

        if (i == name.length() || name[i] == ' ') {

            int end = i - 1;

            while (start < end) {
                swap(name[start], name[end]);
                start++;
                end--;
            }

            start = i + 1;
        }
    }

    cout << name;

    return 0;
}