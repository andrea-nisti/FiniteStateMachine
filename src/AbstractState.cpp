//
// Created by andreanistico on 07/02/17.
//

#include "AbstractState.h"
#include <stdio.h>
#include <iostream>

AbstractState::AbstractState(Machine *context, const int _id) : _context(context), _id(_id) {}

int AbstractState::getId() const {
    return _id;
}

AbstractState::~AbstractState() {}





