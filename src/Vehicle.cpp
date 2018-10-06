#include "States.h"
#include <string>
#include <fstream>

using namespace std;

/*
 * Constructor.
 */
States::States() {
  //is_initialized_ = false;
  cur_state = "KL";
  
}

/**
* Destructor.
*/
States::~States() {}

string States::getState() {
	return cur_state;
}