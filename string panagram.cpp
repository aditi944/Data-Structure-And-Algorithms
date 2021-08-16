#include <iostream>
#include <iomanip>
#include <cstdio>
#include <math.h>
#include <algorithm>
#include <queue>
#include <string>
#include <fstream>
#include <vector>
#include <stack>
#include <map>
#include <set>
#include <ctime>

#define all(x) (x).begin(), (x).end()
#define pb push_back
#define float long double
#define LL long long
#define itn int
#define mp make_pair
#define x first
#define y second

using namespace std;

int main(){

    string s;
    vector<int> a(256, 0);
    getline(cin, s);
    for (int i = 0; i < s.length(); i++){
        a[s[i]]++;
    }
    for (char c = 'a'; c <= 'z'; c++){
        if (a[c]+ a[c - 'a' + 'A'] == 0){
            cout << "not pangram\n";
            return 0;
        }
    }
    cout << "pangram\n";
    
    return 0;
}
