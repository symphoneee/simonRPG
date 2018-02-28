#include "SIMON.HPP"


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

void simon::setInb(double i){
    inb = i;
}

void simon::setinItem(std::string s, int i){
    inItem = s;
    inb = i;
}



double simon::getHp(){
    return hp;
}

double simon::getStr(){
    return str;
}

double simon::getDef(){
    return def + inb;
}

double simon::getVit(){
    return vit;
}

double simon::getAp(){
    return ap;
}

double simon::getDmg(){
    return atk;
}

std::string simon::getinItem(){
    return inItem;
}

