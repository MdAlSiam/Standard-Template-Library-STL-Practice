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
	ll pretest, test;
	map <string, string> slogan;
	char x[110], y[110], z[110];
    scl(pretest);
    getchar();
    while(pretest--){
        gets(x);
        gets(y);
        slogan[x] = y;
    }
    scl(test);
    getchar();
    while(test--){
        gets(z);
        cout << slogan[z] << endl;
    }
    slogan.clear();
	return 0;
}
