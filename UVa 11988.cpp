#include <bits/stdc++.h>
using namespace std;

string str;
list<char> li;
list<char>::iterator it;

int main(){
    while(cin >> str){
        li.clear();
        it = li.begin();
        int len = str.length();
        for(int i = 0; i < len; i++){
            if(str[i] == '[') it = li.begin();
            else if(str[i] == ']') it = li.end();
            else li.insert(it, str[i]);
        }
        for(it = li.begin(); it != li.end(); it++){
            cout << *it ;
        }
        cout << endl;
    }
}
