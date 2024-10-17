#include <iostream>
#include <vector>
using namespace std;

void generiraj_podskupove(vector<int>& skup, vector<int>& trenutni_podskup, int indeks) {
    if (indeks == skup.size()) {
        // Ispis trenutnog podskupa
        for (int i : trenutni_podskup) {
            cout << i << " ";
        }
        cout << endl;
        return;
    }
    
    // Rekurzivni poziv bez dodavanja trenutnog elementa
    generiraj_podskupove(skup, trenutni_podskup, indeks + 1);
    
    // Dodavanje trenutnog elementa u podskup
    trenutni_podskup.push_back(skup[indeks]);
    
    // Rekurzivni poziv s dodanim elementom
    generiraj_podskupove(skup, trenutni_podskup, indeks + 1);
    
    // Uklanjanje elementa iz podskupa nakon rekurzije
    trenutni_podskup.pop_back();
}

int main() {
    int t;
    cout << "Unesite n predmeta: ";
    cin >> t;
    
    int n = 7;
    int ukupno = 1;
    
    for (int i = 0; i < n; i++) {
        ukupno += i;
    }
    
    if (ukupno > t) {
        cout << "Yes" << endl;
        
        vector<int> skup;
        for (int i = 1; i <= t; i++) {
            skup.push_back(i);
        }
        
        vector<int> trenutni_podskup;
        generiraj_podskupove(skup, trenutni_podskup, 0);
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}