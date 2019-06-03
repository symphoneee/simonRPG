#include "SIMON.HPP"


void simon::setName(std::string n) {
    name = n;    
}

void simon::setHate(std::string h) {
    hate = h;    
}

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

void simon::displayStats(){
    std::cout << " " << std::endl;
    std::cout << " " << std::endl;
    std::cout << "-------||+~~+||-------" << std::endl;
    std::cout << name << "'s current stats:" << std::endl;
    std::cout << "---------****---------" << std::endl;
    std::cout << "     LVL: " << getLvl()  << std::endl;
    std::cout << "     HP:  " << getHp()  << std::endl;
    std::cout << "     STR: " << getStr() << std::endl;
    std::cout << "     DEF: " << getDef() << std::endl;
    std::cout << "     VIT: " << getVit() << std::endl;
    std::cout << "     AP:  " << getAp() << std::endl;
    std::cout << "     DMG: " << getDmg() << std::endl;
    std::cout << "     WPN: " << weapon << std::endl;
    std::cout << "     INV: " << inItem << std::endl;
    std::cout << "---------****---------" << std::endl;
    std::cout << "     T.W.A.O.K.K.     " << std::endl;
    std::cout << "-------||+~~+||-------" << std::endl;
    std::cout << "...and why do you hate " << hate << 
                 " so much bro?? " << std::endl;
    std::cout << " " << std::endl;
    std::cout << " " << std::endl;
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


void tables::setName(std::string n) {
    name = n;    
}

void tables::setHate(std::string h) {
    hate = h;    
}

void tables::setLvl(double l){
    lvl = l;
}

void tables::setHp(double h){
    hp = h;
}

void tables::setStr(double s){
    str = s;
}

void tables::setDef(double d){
    def = d;
}

void tables::setVit(double v){
    vit = v;
}

void tables::setAp(double a){
    ap = a;
}

void tables::setinItem(std::string s, int i){
    inItem = s;
    inb = i;
}

void tables::setWeapon(std::string w, int i){
    weapon = w;
    wnb = i;
}

void tables::displayStats(){
    std::cout << " " << std::endl;
    std::cout << " " << std::endl;
    std::cout << "-------||+~~+||-------" << std::endl;
    std::cout << name << "'s current stats:" << std::endl;
    std::cout << "---------****---------" << std::endl;
    std::cout << "     LVL: " << getLvl()  << std::endl;
    std::cout << "     HP:  " << getHp()  << std::endl;
    std::cout << "     STR: " << getStr() << std::endl;
    std::cout << "     DEF: " << getDef() << std::endl;
    std::cout << "     VIT: " << getVit() << std::endl;
    std::cout << "     AP:  " << getAp() << std::endl;
    std::cout << "     DMG: " << getDmg() << std::endl;
    std::cout << "     WPN: " << weapon << std::endl;
    std::cout << "     INV: " << inItem << std::endl;
    std::cout << "---------****---------" << std::endl;
    std::cout << "     T.W.A.O.K.K.     " << std::endl;
    std::cout << "-------||+~~+||-------" << std::endl;
    std::cout << "...and why do you hate " << hate << 
                 "so much bro?? " << std::endl;
    std::cout << " " << std::endl;
    std::cout << " " << std::endl;
}

double tables::getLvl(){
    return lvl;
}

double tables::getHp(){
    return hp;
}

double tables::getStr(){
    return str;
}

double tables::getDef(){
    return (vit / 2) + def + inb;
}

double tables::getVit(){
    return vit;
}

double tables::getAp(){
    return ap;
}

double tables::getDmg(){
    return (str / 2) + wnb;
}
