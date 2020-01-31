#include <cmath>
#include <cstdio>
#include <vector>
#include <set>
#include <map>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <utility>
#include <list>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define dd double
#define scl(x) scanf("%lld", &x)
#define scd(x) scanf("%lf", &x)
#define pi acos(-1.0)
#define pb push_back
#define Sort(x) sort(x.begin(), x.end())
#define For(i, x, y) for(ll i = x; i < y; i++)
#define pii pair < int, int >
#define ppi pair < pii, int >
#define ff first
#define ss second

bool isBalanced(string x){
    stack <char> st;
    ll l = x.length();
    For(i, 0, l){
        if(!st.empty() && x[i] == ')' && st.top() == '(') st.pop();
        else if(!st.empty() && x[i] == '}' && st.top() == '{') st.pop();
        else if(!st.empty() && x[i] == ']' && st.top() == '[') st.pop();
        else if(x[i] == '(') st.push(x[i]);
        else if(x[i] == '{') st.push(x[i]);
        else if(x[i] == '[') st.push(x[i]);
        else if(x[i] == ')') st.push(x[i]);
        else if(x[i] == '}') st.push(x[i]);
        else if(x[i] == ']') st.push(x[i]);
    }
    if(st.empty()) return true;
    else return false;
}

int main(){
	ll n;
	string x;
	scl(n);
	getchar();
	while(n--){
	    getline(cin, x);
	    if(isBalanced(x)) cout << "Yes" << endl;
	    else cout << "No" << endl;
	} ///End of case
	return 0;
}
