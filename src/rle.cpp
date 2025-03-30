#include <bits/stdc++.h>
using namespace std;

string run_length_encoding(string s);

int main() {
    string s = "hhhkskkseeddtjooooodnnnkkkshhh";
    string result = run_length_encoding(s);
    cout << "Original string: " << s << endl;
    cout << "Encoded string: " << result << endl;
}

string run_length_encoding(string s) {
    string result = "";
    int len = s.length();
    int count = 1, i = 0;

    while (i < len) {
        count = 1;
        result += s[i];
        while(s[i + 1] == s[i]) {
            count++;
            i++;
        }
        result += to_string(count);
        i++;
    }

    return result;
}