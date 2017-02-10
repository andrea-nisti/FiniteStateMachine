//
// Created by andreanistico on 07/02/17.
//

#ifndef STATEMACHINE_ABSTRACTSTATE_H
#define STATEMACHINE_ABSTRACTSTATE_H

#include "Machine.h"
class Machine;
class AbstractState {

public:
    AbstractState(Machine *context);
    ~AbstractState();

    int getId() const;

    //Run state, define here switching condition for particular nodes (e.g. StateExample:AbstractState* NewState;
    //  Set here new context state                                          _context->setState = NewState)
    virtual void handle() = 0;
    virtual void setId() = 0;

protected:
    int _id;
    Machine *_context;

};


#endif //STATEMACHINE_ABSTRACTSTATE_H
