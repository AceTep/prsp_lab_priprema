// alias gpp='g++ -o ./solution'
// alias gpp='g++ -o ./solution solution.cpp'

#include <iostream>
// #include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    freopen("ulaz_math.txt", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);

    string math;
    cin>>math;
    int c1=0,c2=0,c3=0;
    for(auto c:math){
        if(c=='1') c1++;
        if(c=='2') c2++;
        if(c=='3') c3++;
    }
    string result="";
    for(int i=0;i<c1;i++){
        if(i>0) result += '+';
        result += '1';
    }

    for(int i=0;i<c2;i++){
            if(!result.empty()) result += '+';
            result += '2';
        }

    for(int i=0;i<c3;i++){
            if(!result.empty()) result += '+';
            result += '3';
        }


    cout<<result;
    return 0;
}