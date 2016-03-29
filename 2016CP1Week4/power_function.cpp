/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   power_function.cpp
 * Author: k
 *
 * Created on 29 March 2016, 3:50 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;
void power(int, int);

/*
 * 
 */
int main(int argc, char** argv) {
    
    power(2, 4);
    power(3, 3);
    power(5, 4);
    return 0;
}

void power(int a, int b) {
    int i = 0, p = 1;
    while (i < b) {
        p = p * a;
        i++;
    }
    cout << a << " to the power of " << b << " is = " << p << endl;
}