#include <iostream>
#include <string>
#include <set>
#include <sstream>

using namespace std;

set<string> dict;
int main() {
    string s, buf;
    while (cin >> s) {
        for (int i = 0; i < s.size(); ++i) {
            if (isalpha(s[i])) s[i] = tolower(s[i]);
            else s[i] = ' ';
        }
        stringstream ss(s);//将字符串转换处理为每一个单词
        while (ss >> buf)
            dict.insert(buf);
    }
    for (set<string>::iterator it = dict.begin(); it != dict.end(); ++it) {
        cout << *it << endl;
    }
    return 0;
}
