#include <iostream>
using namespace std;

class Herbivore
{
public:
    Herbivore(int weight);
    virtual ~Herbivore();

    int get_weight() const;
    bool alive_animal() const;
    void eat_plant();

protected:
    int weight;
    bool alive;
};

class Carnivore
{
public:
    Carnivore(int power);
    virtual ~Carnivore();

    int get_power() const;
    void eat(Herbivore *herbivore);

protected:
    int power;
};
