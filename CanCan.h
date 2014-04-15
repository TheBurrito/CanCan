#ifndef CanCan_h_
#define CanCan_h_
#include "stack.h"

namespace CanCan {

typedef enum {
	eStart,
	eFindCan,
	eCheckCan,
	eGrabCan,
	eFindGoal,
	eScore,
	
	eStateEnd
} CanCanState;

CanCanSoccer();
~CanCanSoccer();

//Pushing a state makes it the new current state.
//The existing current state will be revisited in the future
void pushState(State s);

//Prematurely ends the current state. The state returned is the new current
//state that will be active on the next call to update().
State popState();

//returns the current state of the CanCan state machine
State currentState();

bool update();

} //namespace CanCan

#endif //CanCan_h_
