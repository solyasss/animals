#include "animals.h"
#include <iostream>
using namespace std;

class Lion
{
public:
    Lion(int power);
    ~Lion();

    int get_power() const;
    void eat(Herbivore *herbivore);

private:
    int power;
};