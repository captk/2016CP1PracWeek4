/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   temperature.cpp
 * Author: k
 *
 * Created on 30 March 2016, 2:02 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    double t_in_fah, t_in_cel;
    cout << "Enter a temperature in Fahrenheit \n";
    cin >> t_in_fah;
    t_in_cel = static_cast<float>(5) / 9 * (t_in_fah - 32);
    cout << "The temperature in Celsius is:  " << t_in_cel << endl;
    return 0;
}
