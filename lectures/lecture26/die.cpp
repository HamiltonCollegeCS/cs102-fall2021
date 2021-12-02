/**
 * Keep on rolling.
 * @file die.cpp
 * @author Darren Strash
 * @collaborators CS 102 Fall 2021
 * @date December 2, 2021
 */
#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

#define NUM_ROLLS 10

/*
    Make classes Die and LoadedDie that have the following functionality:
    - Stores the current value of the die
    - Provides a method roll() that updates the value of the die
    - Provides a method get_value() that returns the value of 
      the die

    - Die should be a fair 6-sided die.
    - LoadedDie's value should alternate between 3 and 4.

    Your solution should make use of parent-child classes and
    virtual methods as appropriate.
*/

class Die {
public:
    Die() {
        cout << "I'm constructing a Die object" << endl;
        roll();

    }
    int get_value() const {
        return _value;
    }
    virtual void roll() {
        _value = rand() % 6 + 1;
    }
    // can access protected variables from child class, but don't see
    // them publicly (outside of this class and child classes).
protected:
    int _value;
};

// LoadedDie inherits attributes and methods from Die (inheritance)
class LoadedDie : public Die {
public:
    LoadedDie() {
        cout << "I'm constructing a LoadedDie object" << endl;
        roll();
    }
    void roll() {
        _value = rand() % 2 + 3;
    }
};

int main() {
    srand(time(0));
    /*
    Die die;
    for (size_t roll_number = 0; roll_number < NUM_ROLLS; roll_number++) {
        die.roll();
        cout << "die rolled a " << die.get_value() << endl;
    }
     */

    /*
    cout << endl << "Now the loaded die..." << endl;
    LoadedDie loaded_die;
    cout << "initial loaded die " << loaded_die.get_value() << endl;

    for (size_t roll_number = 0; roll_number < NUM_ROLLS; roll_number++) {
        loaded_die.roll();
        cout << "loaded die rolled a " << loaded_die.get_value() << endl;
    }
     */

    /*
    vector<Die *> die_vector;
    die_vector.push_back(new LoadedDie());
    die_vector.push_back(new LoadedDie());
    die_vector.push_back(new Die());
    die_vector.push_back(new Die());
    die_vector[0]->roll();
    cout << "I rolled a " << die_vector[0]->get_value() << endl;
    //die_vector.pop_back();
    delete die_vector[0];
    delete die_vector[1];
    delete die_vector[2];
    delete die_vector[3];
    */
    
    LoadedDie loaded_die;
    Die & am_i_loaded = loaded_die;
    am_i_loaded.roll();
    cout << "am i loaded? " << am_i_loaded.get_value() << endl;

    return 0;
}
