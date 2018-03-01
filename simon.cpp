#include "SIMON.HPP"


void simon::setLvl(double l){
    lvl = l;
}

void simon::setHp(double h){
    hp = h;
}

void simon::setStr(double s){
    str = s;
}

void simon::setDef(double d){
    def = d;
}

void simon::setVit(double v){
    vit = v;
}

void simon::setAp(double a){
    ap = a;
}

void simon::setinItem(std::string s, int i){
    inItem = s;
    inb = i;
}

void simon::setWeapon(std::string w, int i){
    weapon = w;
    wnb = i;
}


double simon::getLvl(){
    return lvl;
}

double simon::getHp(){
    return hp;
}

double simon::getStr(){
    return str;
}

double simon::getDef(){
    return (vit / 2) + def + inb;
}

double simon::getVit(){
    return vit;
}

double simon::getAp(){
    return ap;
}

double simon::getDmg(){
    return (str / 2) + wnb;
}

std::string simon::getinItem(){
    return inItem;
}

std::string simon::getWeapon(){
    return weapon;
}

