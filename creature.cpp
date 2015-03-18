#include "creature.h"

using namespace std;

int creature::total_creatures = 0;

creature::creature(string _name, string _type) 
:_id(++total_creatures), _health(100), _name(_name), _type(_type){

}

int creature::defend(int dmg_taken){
    _health -= dmg_taken;
    return _health;
}

int creature::attack(int dmg_sent, creature *target){
    target->defend(dmg_sent);
    return target->_health;
}





