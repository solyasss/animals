#include "wildebeest.h"
#include <iostream>
using namespace std;

Wildebeest::Wildebeest(int weight) : weight(weight), alive(true) {}

Wildebeest::~Wildebeest() {}

int Wildebeest::get_weight() const
{
    return weight;
}

bool Wildebeest::alive_animal() const
{
    return alive;
}

void Wildebeest::eat_grass()
{
    if (alive)
    {
        weight += 10;
    }
}