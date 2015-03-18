/* 
 * File:   creature.h
 * Author: tarita
 *
 * Created on March 7, 2015, 10:59 AM
 */

#ifndef CREATURE_H
#define	CREATURE_H

#include <string>

using namespace std;

class creature {
    static int total_creatures;

public:
    creature(string, string);

    string get_name() {
        return _name;
    }

    string get_type() {
        return _type;
    }

    int get_id() {
        return _id;
    }

    int get_health() {
        return _health;
    }

    int defend(int dmg_taken);
    int attack(int dmg_sent, creature *target);


private:
    int _id, _health;
    string _name, _type;
};

#endif	/* CREATURE_H */

