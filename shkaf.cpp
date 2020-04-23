#include "shkaf.h"

shkaf::shkaf(string name_, int size_, string color_, string material_, int shelf_):mebel(name_, size_, color_, material_){
    if(!SetShelf(shelf_))
    shelf = 0;
}

shkaf::shkaf(){
    shelf = 0;
}

shkaf::shkaf(const shkaf &p){
    name = p.name;
    size = p.size;
    color = p.color;
    material = p.material;
    shelf = p.shelf;
}

bool shkaf::SetShelf(int shelf_){
    if (shelf_ < 0)
    return false;
    else
    shelf = shelf_;
    return true;
}

int shkaf::GetPolki() const{
    return shelf;
}

void shkaf::print() const{
cout << "Name: " << name << endl;
cout << "Size: " << size << endl;
cout << "Color: " << color << endl;
cout << "Material: " << material << endl;
cout << "Shelf: " << shelf << endl;
}
