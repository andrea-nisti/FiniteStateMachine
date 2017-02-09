//
// Created by andreanistico on 07/02/17.
//

#ifndef STATEMACHINE_MACHINE_H
#define STATEMACHINE_MACHINE_H

#include <bits/unique_ptr.h>
#include "AbstractState.h"

class AbstractState;
typedef std::unique_ptr<AbstractState> AbstractStatePtr;


class Machine {


public:

    Machine();
    Machine(AbstractStatePtr init);
    ~Machine();

    int getActualNodeId();

    void handle();
    void setStatePtr(AbstractStatePtr state) ;

    AbstractStatePtr _state;

};


#endif //STATEMACHINE_MACHINE_H
