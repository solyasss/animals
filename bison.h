#include <iostream>
using namespace std;

class Bison
{
public:
    Bison(int weight);
    ~Bison();

    int get_weight() const;
    bool alive_animal() const;
    void eat_grass();

private:
    int weight;
    bool alive;
};
