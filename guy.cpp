// alias gpp='g++ -o ./solution'
// alias gpp='g++ -o ./solution solution.cpp'

#include <iostream>
#include <set>
#include <vector>
#include <sstream>
// #include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    freopen("ulaz_guy.txt", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; 
    cin >> n;
    cin.ignore(); 

    set<int> levels; 
    string line;

    getline(cin, line); 
    stringstream ssX(line); 

    int level;
    while (ssX >> level) {
        levels.insert(level); 
    }

    getline(cin, line); 
    stringstream ssY(line); 

    while (ssY >> level) {
        levels.insert(level); 
    }

    if (levels.size() == n) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}