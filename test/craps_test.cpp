#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"
#include "roll.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Die rolls return a value from 1 to 6", "[die]")
{
	Die die;
	for(int i = 0; i < 10; i++) {
		die.roll();
		int value = die.rolled_value();
		REQUIRE(value >= 1);
		REQUIRE(value <= 6);
	}
}

TEST_CASE("Ensure die rolls return a value from 2 to 12.")
{
	// Create 2 Die
	Die die1, die2;
	// create a roll with the 2 dice
	Roll roll(die1, die2);
	// Roll the dice 10 times using a loop
	for(int i = 0; i < 10; i++) {
		// actually roll the die
		roll.roll_die();
		// get the value of the roll
		int value = roll.roll_value(); 
		// test that it is greater or equal to 2 and less than or equal to 12
		REQUIRE(value >= 2);
		REQUIRE(value <= 12);
	
	}
}
