#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++) {
        if((s[i] >= 'a'&& s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            if(s[i] >= 'a' && s[i] <= 'z') {
                cout << char((s[i]-'a'+13)%26+'a');
            } else {
                cout << char((s[i]-'A'+13)%26+'A');
            }
        }
        else {
            cout << s[i];
        }
    }
}
// flag
// picoCTF{next_time_I'll_try_2_rounds_of_rot13_wqWOSBKW}