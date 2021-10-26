/**
 * Flip a coin!
 * @file coin.cpp
 * @author Darren Strash
 * @collaborators CS 102 Fall 2021
 * @date October 26, 2021
 */
 #include <iostream>

 using namespace std;

 // Coin is a class
 class Coin {
 public:
     Coin() {
         _value = 1000000000;
         _heads = true;
     }
     Coin(int value) {
         _value = value;
         _heads = true;
     }
     void flip() {
         _heads = rand() % 2;
     }
     void cheat(bool heads) {
         _heads = heads;
     }
     bool is_heads() {
         return _heads;
     }
     int value() {
         return _value;
     }
 private:
     int _value;
     bool _heads;
 };

 // What would you like to do with a coin?
 int main() {
     srand(time(0));
     // coin is an object of type Coin.
     Coin coin;
     coin.flip();
     cout << "Is the coin heads? " << coin.is_heads() << endl;
     coin.cheat(true /* heads */);
     cout << "coin's value = " << coin.value() << endl;
     cout << "Is the coin heads? " << coin.is_heads() << endl;
     Coin coin2(25);
     cout << "coin2's value = " << coin2.value() << endl;
     return 0;
 }
