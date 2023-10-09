#include "continent.h"
#include <iostream>
using namespace std;

Continent::Continent(const string &name) : name(name) {}

Continent::~Continent() {}

Africa::Africa(const string &name) : Continent(name) {}

Africa::~Africa() {}

void Africa::Regions() const
{
    cout << "Africa: " << endl;
    cout << "1. Savannah" << endl;
    cout << "2. Jungles" << endl;
    cout << "3. Deserts" << endl;
}

NorthAmerica::NorthAmerica(const string &name) : Continent(name) {}

NorthAmerica::~NorthAmerica() {}

void NorthAmerica::Regions() const
{
    cout << "North America: " << endl;
    cout << "1. Forests" << endl;
    cout << "2. Mountains" << endl;
    cout << "3. Deserts" << endl;
}
