#ifndef STADION_H
#define STADION_H
#include <iostream>
#include <fstream>

using namespace std;

class Stadion
{
    public:
        Stadion();
        ~Stadion();
        string name, sport;
        int year, places, arenas, bukva;
        Stadion *Next, *Prev;
};

#endif // STADION_H
