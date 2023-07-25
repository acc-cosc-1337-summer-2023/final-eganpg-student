//
#ifndef ROLL_H
#define ROLL_H
#include "die.h"

class Roll
{
    public:
        // With initializer list, initialize die1 and die2 Roll class private variables
        Roll(Die& die1, Die& die2);
        // Rolls die1 and die2, saves rolled values to value(private), and sets rolled to true.
        void roll_die();
        // Returns the sum of the roll values.
        int roll_value() const;

    private:
        // Reference to the first Die
        Die& die1;
        // Reference to the second Die
        Die& die2;
        // Flag to keep track if the dice have been rolled bool
        bool rolled;
        // Sotre sum of the roll values
        int value;
};

#endif