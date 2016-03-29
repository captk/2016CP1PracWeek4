/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   power_function_loop.cpp
 * Author: k
 *
 * Created on 29 March 2016, 5:36 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;
void power(int, int);

/*
 * 
 */
int main(int argc, char** argv) {

    for(int i=1; i <= 12; i++){
        power(2, i);
    }

    return 0;
}
