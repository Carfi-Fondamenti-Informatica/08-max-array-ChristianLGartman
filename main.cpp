#include <iostream>
#include "lib.h"
using namespace std;
int main() {
    int x;
    float y;
    float a[x];
    cout << "quale è la dimensione dell'array?" << endl;
    cin >> x;
    for (int i = 0; i < x; i++) {
        cout << "quale è il valore che vuoi inserire?" << endl;
        cin >> y;
        a[i] = y;
    }
    cout<< funzione(a, x);
}
