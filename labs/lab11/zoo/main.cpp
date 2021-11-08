#include <iostream>
// your includes go here

using namespace std;

int main() {
    Goat the_goat;
    Horse the_horse;
    PettingZoo the_zoo;
    the_zoo.add_goat(the_goat);
    the_zoo.add_horse(the_horse);
    the_zoo.open();
    return 0;
}
