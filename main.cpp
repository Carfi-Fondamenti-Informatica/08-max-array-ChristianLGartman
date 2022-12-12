#include <iostream>
#include "lib.h"
using namespace std;
int main() {
    int x;
    float y;
    float a[x];
    cin >> x;
    for (int i = 0; i < x; i++) {
        cin >> y;
        a[i] = y;
    }
    cout<< funzione(a, x);
}
