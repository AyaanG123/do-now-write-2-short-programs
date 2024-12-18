#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#include <ctime>
#include <cmath>

int main() {
    float value = 87.2234298348762783;
    cout << floor(value*100+0.5)/100 << endl;
    
    srand(time(0));
    cout << rand() % 11 << endl;
    
    //You need time for random number so you can seed the number

    return 0;
}
