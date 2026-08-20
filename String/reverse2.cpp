#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    getline(cin, name);
    int s=0;
    int e=name.length()-1;
    while(s<=e){
        swap(name[s],name[e]);
        s++;
        e--;
    }

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