#include "CanCan.h"

namespace CanCan {

void pushState(State s) {
	_states.push(s);
}

bool update() {
	if (_states.empty()) {
		//the game is "done"
		return false;
	}
	
	State curState;
	_states.peek(curState);
	
	switch(curState) {
	case eStart:
		
		break;
	
	case eFindCan:
		
		break;
	
	case eCheckCan:
		
		break;
	
	case eGrabCan:
		
		break;
	
	case eFindGoal:
		
		break;
	
	case eScore:
		
		break;
	}
	
	return true;
}

}
