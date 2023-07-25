//
#ifndef SHOOTER_H
#define SHOOTER_H

#include <iostream>
#include <vector>
#include "roll.h"
#include "die.h"

class Shooter 
{
    public:
        // Function to shoot a dice and return a Roll
        Roll* throw_dice(Die& die1, Die& die2);
        // Overload << operator for easy printing of Shooter's rolls - use friend to access private class
        friend std::ostream& operator<<(std::ostream& os, const Shooter& shooter);
        // Destructor for cleaning up dynamic memory
        ~Shooter();

    private:
        // Vector to store pointers to Roll instances
        std::vector<Roll*> rolls;

};

#endif