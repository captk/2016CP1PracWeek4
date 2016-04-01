/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   quadratic_round.cpp
 * Author: k
 *
 * Created on 30 March 2016, 1:43 AM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>


using namespace std;

/*
 * 
 */
int mainQuadraticRound(int argc, char** argv) {
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
        double x1 = (-1)*b/(2*a);
        cout << "There is one root: x = " << x1 << endl;
        cout << "The root rounded up: " << ceil(x1) << endl;
        cout << "The root rounded down: " << floor(x1) << endl;
    }
    else{
        double numer1, numer2, denom;
        numer1 = (-1)*b + sqrt(delta);
        numer2 = (-1)*b - sqrt(delta);
        denom = 2*a;
        double x1, x2;
        x1 = numer1/denom;
        x2 = numer2/denom;
        cout << "There are two real roots: x1 = " <<  x1
                << " and x2 = " << x2 << endl;
        cout << "The two roots rounded up: x1 = " <<  ceil(x1)
                << " and x2 = " << ceil(x2) << endl;
        cout << "The two roots rounded up: x1 = " <<  floor(x1)
                << " and x2 = " << floor(x2) << endl;
    }
    
    return 0;
}


