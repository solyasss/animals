#include "wolf.h"
#include <iostream>
using namespace std;

Wolf::Wolf(int power) : power(power) {}

Wolf::~Wolf() {}

int Wolf::get_power() const
{
    return power;
}

void Wolf::eat(Herbivore *herbivore)
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
