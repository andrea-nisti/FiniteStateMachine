//
// Created by andreanistico on 07/02/17.
//

#include "Machine.h"


Machine::Machine() {}
Machine::Machine(AbstractStatePtr init) : _state(std::move(init)){}
Machine::~Machine() {}

void Machine::setStatePtr(AbstractStatePtr state){

    _state = std::move( state );
}

void Machine::handle() {

    //Call state handler and set new state

    _state->handle();

}

int Machine::getActualNodeId() {
    return _state->getId();
}


