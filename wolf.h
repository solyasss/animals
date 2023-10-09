#include "animals.h"
#include <iostream>
using namespace std;

class Wolf
{
public:
    Wolf(int power);
    ~Wolf();

    int get_power() const;
    void eat(Herbivore *herbivore);

private:
    int power;
};
