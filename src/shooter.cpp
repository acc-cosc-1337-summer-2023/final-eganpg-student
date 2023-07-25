//
#include "shooter.h"
#include "roll.h"


// Function to shoot a dice and return a Roll
Roll* Shooter::throw_dice(Die& die1, Die& die2)
{
    // Create a new roll on the heap
    Roll* roll = new Roll(die1, die2);
    // Roll the dice
    roll->roll_die();
    // Add the roll to the vector


    //PAUSING HERE - RELOOK at from here down
    rolls.push_back(roll);
    // Return the pointer to the roll
    return roll;
}

//     // This is a method that gives access to the rolls vector
// const std::vector<Roll*>& getRolls() const {
//         return rolls;
// }
// Overload << operator for easy printing of Shooter's rolls - use friend to access private class
std::ostream& operator<<(std::ostream& os, const Shooter& shooter)
{
    for (Roll* roll : shooter.rolls){
        os << roll->roll_value() << std::endl;
    }
    return os;
}

// Destructor for cleaning up dynamic memory
Shooter::~Shooter()
{
    for(Roll* roll : rolls)
    {
        // delete each roll in the vector
        delete roll;
    }
}

    
    