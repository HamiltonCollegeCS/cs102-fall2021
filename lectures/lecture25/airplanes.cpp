/**
 * Design considerations: System checks for airplanes.
 * @file airplanes.cpp
 * @author Darren Strash
 * @collaborators CS 102 Fall 2021
 * @date November 30, 2021
 */
#include <iostream>

using namespace std;

class Airplane {
public:
    virtual bool check_engine() = 0;
    virtual bool check_fuel() = 0;
    bool systems_check() {
        return check_engine() && check_fuel() && custom_check();
    }
    virtual bool custom_check() = 0;
};

class Boeing747 : public Airplane {
public:
    bool check_engine() {
        cout << "Checking Boeing engine" << endl;
        return true;
    }
    bool check_fuel() {
        return true;
    }
    bool check_passengers() {
        return true;
    }
    bool custom_check() {
        return check_passengers();
    }
    //bool systems_check() {
    //    return Airplane::systems_check() && check_passengers();
    //}
};

int main() {

    Boeing747 boeing;
    boeing.systems_check();

    //AirbusA321 airbus;
    //airbus.systems_check();

    return 0;
}
