#include "animals.h"
#include <iostream>
using namespace std;

Herbivore::Herbivore(int weight) : weight(weight), alive(true) {}

Herbivore::~Herbivore() {}

int Herbivore::get_weight() const
{
    return weight;
}

bool Herbivore::alive_animal() const
{
    return alive;
}

void Herbivore::eat_plant()
{
    if (alive)
    {
        weight += 10;
    }
}

Carnivore::Carnivore(int power) : power(power) {}

Carnivore::~Carnivore() {}

int Carnivore::get_power() const
{
    return power;
}

void Carnivore::eat(Herbivore *herbivore)
{
    if (power > herbivore->get_weight())
    {
        power += 10;
    }
    else
    {
        power -= 10;
    }
}
