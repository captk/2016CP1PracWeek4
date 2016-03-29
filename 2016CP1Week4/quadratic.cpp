/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   quadratic.cpp
 * Author: k
 *
 * Created on 29 March 2016, 5:58 PM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;
double quad(double, double, double);
/*
 * 
 */
int main(int argc, char** argv) {
    double a, b, c, x1 ,x2, delta;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(4);
    
    cout << "Enter coefficients: ";
    cin >> a >> b >> c;
    
    delta = pow(b,2) - (4*a*c);
    
    if (delta < 0){
        cout << "There is no solution";
    }
    else if (delta == 0){
        cout << "There is one root: x = " << (-1)*b/(2*a);
    }
    else{
        double numer1, numer2, denom;
        numer1 = (-1)*b + sqrt(delta);
        numer2 = (-1)*b - sqrt(delta);
        denom = 2*a;
        
        cout << "There are two real roots: x1 = " << numer1/denom 
                << " and x2 = " << numer2/denom;
    }
    
    return 0;
}
