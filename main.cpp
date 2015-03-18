/* 
 * File:   main.cpp
 * Author: tarita
 *
 * Created on March 7, 2015, 10:56 AM
 */

#include <cstdlib>
#include "creature.h"
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    creature c1("defend", "human");
    creature c2("target", "human");

    cout << c1.get_name() << " " << c1.get_health() << endl;
    cout << c2.get_name() << " " << c2.get_health() << endl;

    c1.attack(50, &c2);
    cout << c2.get_name() << " " << c2.get_health() << endl;

    return 0;
}

