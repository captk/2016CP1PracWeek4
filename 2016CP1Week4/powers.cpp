/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   powers.cpp
 * Author: k
 *
 * Created on 29 March 2016, 2:23 PM
 */

// This cpp program computes the value of 3^4.
#include <cstdlib>
#include <iostream>
using namespace std;

int mainPowers() {
    int i = 0, p = 1;
    int a = 3, b = 4;
    while (i < b) {
        p = p * a;
        i++;
    }
    cout << a << " to the power of " << b << " is = " << p << endl;
    return 0;
}

