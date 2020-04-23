#ifndef SHKAF_H_INCLUDED
#define SHKAF_H_INCLUDED

#include "mebel.h"

class shkaf: public mebel{
    int shelf;
public:
    shkaf();
    shkaf(string name_, int size_, string color_, string material_, int shelf_);
    shkaf(const shkaf &p);

    bool SetPolki(int shelf_);
    int GetPolki() const;

    void print() const;
};

#endif
