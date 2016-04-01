/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cylinder_overload_menu.cpp
 * Author: k
 *
 * Created on 31 March 2016, 10:59 PM
 */

// This program illustrates the local and global variables and call-by-value.
// This program computes the side area and the cross section area of a cylinder
#include <cstdlib>
#include <iostream>
#include <cmath>
#include "common.h"

using namespace std;
// functions in this program as PI
//double cross_area(double); // Function declaration for function cross area
//double side_area(double, double); // Function declaration for function side area
void doCylinder();
void doSphere();
double sphereArea(double);
double volume (double, double);
double volume (double);
double cross_area(double); // Function declaration for function cross area
double side_area(double, double); // Function declaration for function side area

int main() {
    int userIn;
    cout << "Enter 1 for cylinder or 2 for sphere" << endl;
    cin >> userIn;
    
    if(userIn == 1){
        doCylinder();
    }
    else if (userIn == 2){
        doSphere();
    }
    else 
        cout << "Invalid choice error";
    
}

void doCylinder(){
    double h, r; //variables local to the main function
    cout << "Enter the radius and the height of the cylinder in cm <Enter> ";
    cin >> r >> h;
    cout << endl;
    cout << "The side area of the cylinder is " << side_area(r, h) << " cm-sqr" << endl;
    cout << "The total are of the cylinder is " << side_area(r, h)+2*cross_area(r)
            << " cm-sqr" << endl;
    cout << "The volume of the cylinder is " << volume(r, h) << " cm-cubed" << endl;
}

void doSphere(){
    double r; //variables local to the main function
    cout << "Enter the radius of the sphere in cm <Enter> ";
    cin >> r;
    cout << endl;
    cout << "The radius of the sphere is " << r << endl;
    cout << "The surface area of the sphere is " << sphereArea(r) << " cm-sqr" << endl;
    cout << "The volume of the sphere is " << volume(r) << " cm-cube" << endl;

}

double volume(double r, double h){
    return 2*PI*r*h;
}
double sphereArea(double r){
    return 4*PI*r*r;
}
double volume(double r){
    return 4*PI*r*r*r/3;
}