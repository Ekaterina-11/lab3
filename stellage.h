#ifndef STELLAGE_H_INCLUDED
#define STELLAGE_H_INCLUDED

#include "mebel.h"

class stellage: public mebel{
    int sections;
public:
    stellage();
    stellage(string name_, int size_, string color_, string material_, int sections_);
    stellage(const stellage &p);

    bool SetSections(int sections_);
    int GetSections() const;

    void print() const;
};

#endif
