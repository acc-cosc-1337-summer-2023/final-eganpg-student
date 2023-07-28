#include <iostream>
#include <ctime>
#include "die.h"
#include "shooter.h"
#include "come_out_phase.h"
#include "point_phase.h"

using std::cout;

int main() {
    // This allows the rand function to output true random numbers.
    srand(time(0));  

    Die die1, die2;
    Shooter shooter;

    // Obtain the roll from the shooter.
    Roll* roll = shooter.throw_dice(die1, die2);  

    ComeOutPhase come_out_phase;
    
    // Keep rolling while outcome is natural or craps.
    while (come_out_phase.get_outcome(roll) == RollOutcome::natural || come_out_phase.get_outcome(roll) == RollOutcome::craps) {
        // Display the Roll
        cout<<"Rolled "<<roll->roll_value()<< ", roll again.\n";
        // Roll again.
        roll = shooter.throw_dice(die1, die2); 
    }

    cout<<"Rolled "<<roll->roll_value()<<", start of point phase.\n";
    cout<<"Roll until "<<roll->roll_value()<<" or 7 is rolled.\n";
    // Point is the roll value.
    int point = roll->roll_value();  
     // Roll again.
    roll = shooter.throw_dice(die1, die2);
    
    PointPhase point_phase(point);

    // Keep rolling while outcome is not point or seven_out.
    while (point_phase.get_outcome(roll) != RollOutcome::point && point_phase.get_outcome(roll) != RollOutcome::seven_out) {
        cout<<"Rolled "<< roll->roll_value()<<", roll again.\n";
        // Roll again.
        roll = shooter.throw_dice(die1, die2);  
    }
    // Print the roll / ending the point phase
    cout<<"Rolled "<<roll->roll_value()<<", end of point phase.\n";
    
    // Display shooter rolls.
    cout<<shooter;
}
