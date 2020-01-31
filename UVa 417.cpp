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

string alphabet = "abcdefghijklmnopqrstuvwxyz";
map <string, ll> amarMap;

void precalc(){
    ll i, j, k, l, m;
    string s1, s2, s3, s4, s5;
    ll value = 0;

    ///For 1 element
    for(i = 0; i < 26; i++){
        value++;
        s1 = alphabet[i];
        amarMap[s1] = value;
        //cout << s1 << " " << value << endl;
    }

    ///For 2 elements
    for(i = 0; i < 26; i++){
        for(j = i+1; j < 26; j++){
            value++;
            s1 = alphabet[i];
            s2 = alphabet[j];
            amarMap[s1+s2] = value;
            //cout << s1+s2 << " " << value << endl;
        }
    }

    ///For 3 elements
    for(i = 0; i < 26; i++){
        for(j = i+1; j < 26; j++){
            for(k = j+1; k < 26; k++){
                value++;
                s1 = alphabet[i];
                s2 = alphabet[j];
                s3 = alphabet[k];
                amarMap[s1+s2+s3] = value;
                //cout << s1+s2+s3 << " " << value << endl;
            }
        }
    }

    ///For 4 elements
    for(i = 0; i < 26; i++){
        for(j = i+1; j < 26; j++){
            for(k = j+1; k < 26; k++){
                for(l = k+1; l < 26; l++){
                    value++;
                    s1 = alphabet[i];
                    s2 = alphabet[j];
                    s3 = alphabet[k];
                    s4 = alphabet[l];
                    amarMap[s1+s2+s3+s4] = value;
                    //cout << s1+s2+s3+s4 << " " << value << endl;
                }
            }
        }
    }

    ///For 5 elements
    for(i = 0; i < 26; i++){
        for(j = i+1; j < 26; j++){
            for(k = j+1; k < 26; k++){
                for(l = k+1; l < 26; l++){
                    for(m = l+1; m < 26; m++){
                        value++;
                        s1 = alphabet[i];
                        s2 = alphabet[j];
                        s3 = alphabet[k];
                        s4 = alphabet[l];
                        s5 = alphabet[m];
                        amarMap[s1+s2+s3+s4+s5] = value;
                        //cout << s1+s2+s3+s4+s5 << " " << value << endl;
                    }
                }
            }
        }
    }


    ///Returns ghorar dim
}

int main(){
    precalc();
	string x;
	while(cin >> x) printf("%lld\n", amarMap[x]);
    return 0;
}
