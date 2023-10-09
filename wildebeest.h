#include <iostream>
using namespace std;

class Wildebeest
{
public:
    Wildebeest(int weight);
    ~Wildebeest();

    int get_weight() const;
    bool alive_animal() const;
    void eat_grass();

private:
    int weight;
    bool alive;
};
