#include "lion.h"
#include <iostream>
using namespace std;

Lion::Lion(int power) : power(power) {}

Lion::~Lion() {}

int Lion::get_power() const
{
    return power;
}

void Lion::eat(Herbivore *herbivore)
{
    if (power > herbivore->get_weight())
    {
        power += 10;
        herbivore->set_alive(false); 
    }
    else
    {
        power -= 10;
    }
}