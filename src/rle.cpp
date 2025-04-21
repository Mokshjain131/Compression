#include <bits/stdc++.h>
using namespace std;

string run_length_encoding(string s);
string run_length_decoding(string s);

int main() {
    string s = "hhhkskkseeddtjooooodnnnkkkshhh";
    cout << "Original string: " << s << endl;

    string encoded_string = run_length_encoding(s);
    cout << "Encoded string: " << encoded_string << endl;
    cout << "Length of encoded string: " << encoded_string.length() << endl;

    string decoded_string = run_length_decoding(encoded_string);
    cout << "Decoded string: " << decoded_string << endl;
    cout << "Length of original string: " << s.length() << endl;

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

string run_length_decoding(string s) {
    string result = "";
    int len = s.length();
    if (len == 0) return result;
    int i = 1;

    while (i < len) {
        for (int j = 0; j < (s[i] - '0'); j++) {
            result += s[i - 1];
        }
        i += 2;
    }

    return result;
}