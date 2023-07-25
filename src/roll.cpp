//
#include "roll.h"

// Constructor that takes references to two dice. Initializes internal dice references and sets rolled flag to false.
Roll::Roll(Die& die1, Die& die2) : die1(die1), die2(die2), rolled(false) {}

// Rolls die1 and die2, saves rolled values to value(private), and sets rolled to true.
void Roll::roll_die()
{
    die1.roll();
    die2.roll();
    value = die1.rolled_value() + die2.rolled_value();
    rolled = true;
}
// Returns the sum of the roll values.
int Roll::roll_value() const
{
    return value;
}