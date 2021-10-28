/**
 * A Racer class
 * @file race.cpp
 * @author Darren Strash
 * @collaborators None
 * @date October 28, 2021
 */
#include <iostream>
#include <cstring>

#define MAX_NAME_LENGTH 36
#define MAX_RACERS 4

using namespace std;

class Racer {
public:
    Racer(char name[], unsigned int speed) {
        cout << "constructor!" << endl;
        strcpy(_name, name);
        _speed = speed;
        _distance_traveled = 0;
    }
    Racer() {
        cout << "default constructor!" << endl;
        _name[0] = '\0';
        _speed = 0;
        _distance_traveled = 0;
    }
    unsigned int get_distance_traveled() {
        return _distance_traveled;
    }
    void advance() {
        _distance_traveled += _speed;
    }
    char * get_name() {
        return _name;
    }
private:
    char _name[MAX_NAME_LENGTH];
    unsigned int _speed;
    unsigned int _distance_traveled;
};

class Race {
public:
    Race() {
        _num_racers = 0;
    }
    void add_racer(Racer racer) {
        cout << "I'm adding " << racer.get_name() << endl;
        _racers[_num_racers++] = racer;
    }
private:
    Racer _racers[MAX_RACERS];
    size_t _num_racers;
};

// Make a class that supports the following code
int main() {
    Racer tahani("Tahani", 3);
    Racer chidi("Chidi", 1);
    Racer eleanor("Eleanor", 2);
    Race race;
    race.add_racer(tahani);
    /*
    Racer tahani("Tahani", 3);
    Racer chidi("Chidi", 1);
    Racer eleanor("Eleanor", 2);

    size_t race_length_in_miles = 10;
    while (tahani.get_distance_traveled() < race_length_in_miles &&
           chidi.get_distance_traveled() < race_length_in_miles &&
           eleanor.get_distance_traveled() < race_length_in_miles) {
        tahani.advance();
        chidi.advance();
        eleanor.advance();
    }

    if (tahani.get_distance_traveled() > chidi.get_distance_traveled() &&
        tahani.get_distance_traveled() > eleanor.get_distance_traveled()) {
        cout << tahani.get_name() << " is the winner!" << endl;
    }
    */

    return 0;
}
