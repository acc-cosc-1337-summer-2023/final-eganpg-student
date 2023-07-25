//
#ifndef DIE_H
#define DIE_H

// Define the class Die
class Die
{
// As shown in the question; create public
public:
    Die();
    // define public class void roll() - Randomly assigns a value to roll_value in the range of 1 to 6
    void roll();
    // define public class rolled_value() const - Returns roll_value
    int rolled_value() const;
// Define private classes
private:
    // define class int roll_value - Stores a randomly assigned value
    int roll_value;
    // define private class int sides - this is a constant set to the value 6
    static const int sides = 6;
};

#endif // DIE_H


