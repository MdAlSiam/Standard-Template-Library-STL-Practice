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

vector <string> bwd, fwd;

void VISIT(string page){
    cout << page << endl;
    bwd.pb(page);
    fwd.clear();
}

void BACK(){
    if(bwd.size() != 0){
        fwd.pb(bwd[bwd.size() - 1]);
        bwd.erase(bwd.begin() + bwd.size() - 1);
        if(bwd.size() != 0) cout << bwd[bwd.size() - 1] << endl;
        else cout << "http://www.lightoj.com/" << endl;
    }
    else cout << "Ignored\n";
}

void FORWARD(){
    if(fwd.size() != 0){
        bwd.pb(fwd[fwd.size()-1]);
        fwd.erase(fwd.begin() + fwd.size() - 1);
        cout << bwd[bwd.size()-1] << endl;
    }
    else cout << "Ignored\n";
}


int main(){
    ll test;
    string command, input;
    scl(test);
    For(kase, 1, test+1){
        printf("Case %lld:\n", kase);
        while(cin >> command){
            if(command == "QUIT") break;
            else if(command == "VISIT"){
                cin >> input;
                VISIT(input);
            }
            else if(command == "FORWARD") FORWARD();
            else if(command == "BACK") BACK();
        }
        fwd.clear();
        bwd.clear();
    }
	return 0;
}
