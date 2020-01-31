#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	stringstream ss;
	string str;
	string word;
	set <string> dic;
	set <string> :: iterator it;
	
	while(getline(cin, str)){
	    for(int i = 0; i < str.length(); i++){
	        if(str[i] >= 65 && str[i] <= 90) str[i] += 32;
	        else if(str[i] >= 97 && str[i] <= 122) continue;
	        else str[i] = ' ';
	    }
	    ss << str;
	    while(ss >> word) dic.insert(word);
	    ss.clear();
	}
	
	for(it = dic.begin(); it != dic.end(); it++)
	    cout << *it << endl;
	return 0;
}
