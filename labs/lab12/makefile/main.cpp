#include <iostream>
#include "Distance.h"

using namespace std;

int main() {
    Distance from_house(5.0f);
    cout << "The distance from the house is " << from_house.get_distance() << endl;
    from_house.move(20.0f);
    cout << "After moving, the distance is " << from_house.get_distance() << endl;
    const Distance from_store = from_house + 4.0f;
    cout << "The distance from the store is " << from_store.get_distance() << endl;
    return 0;
}
