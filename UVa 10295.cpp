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

int main(){
	ll nw, njd;
	scl(nw);
	scl(njd);
	string key;
	ll value;
	map <string, ll> mp;
	For(i, 0, nw){
        cin >> key >> value;
        mp[key] = value;
	}



	For(i, 0, njd){
        ll score = 0;
        string p, q;
        stringstream ss;
        while(1){
            getline(cin, p);
            ss.clear();
            ss << p;
            ll ektahoise = 0;
            while(ss >> p){
                if(p == "."){ektahoise = 1; break;}
                score += mp[p];
            }
            if(ektahoise == 1){printf("%lld\n", score); break;}
        }
	}
	return 0;
}
