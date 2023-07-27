//
#ifndef PHASE_H
#define PHASE_H

#include "roll.h"

// define enum class RollOutcome with 5 parameters as defined
enum class RollOutcome { natural, craps, point, seven_out, nopoint };

//Define class
class Phase
{
    public: 
        // setting to 0 makes it a pure virtual function
        virtual RollOutcome get_outcome(Roll* roll) = 0;
};

#endif