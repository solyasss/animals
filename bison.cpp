#include "bison.h"
#include <iostream>
using namespace std;

Bison::Bison(int weight) : weight(weight), alive(true) {}

Bison::~Bison() {}

int Bison::get_weight() const
{
    return weight;
}

bool Bison::alive_animal() const
{
    return alive;
}

void Bison::eat_grass()
{
    if (alive)
    {
        weight += 10;
    }
}