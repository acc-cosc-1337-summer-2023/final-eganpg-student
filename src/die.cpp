//
//
#include "die.h"
#include <cstdlib>  
#include <ctime>
// Ensure the roll is random. 
Die::Die() {
    srand(time(0));
}
// Roll the die
void Die::roll() {
    // Generate a random number between 1 and sides (6)
    roll_value = rand() % sides + 1;
}
// Get value of most recent roll
int Die::rolled_value() const {
    // return the result
    return roll_value;
}