#include <iostream>
#include "lib.h"
using namespace std;

float funzione (float b[], int h){
    float max= b[0];
    for (int i=0;i < h;i++) {
        if (max < b[i]) {
            max = b[i];
        }
    }
    return max;
}
