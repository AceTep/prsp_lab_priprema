// alias gpp='g++ -o ./solution'
// alias gpp='g++ -o ./solution solution.cpp'

#include <iostream>
#include <vector>
// #include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    freopen("ulaz1.txt", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    vector<vector<int>> matrix(n, vector<int>(3)); 

    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>matrix[i][j];
        }
    }
    int problemi=0;
    for(int i=0;i<n;i++){
        int cout=0;
        for(int j=0;j<3;j++){
            if(matrix[i][j]==1) cout +=1;
        }
        if(cout>=2) problemi+=1;
    }

    cout<<problemi;

}