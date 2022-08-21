#pragma once
#include <iostream>
#include <vector>

#include "IObservable.h"
#include "IUnit.h"

class IObserver
{
public:
    virtual void subscribe(IObservable& unit) = 0;
    virtual void onNotification(IUnit& unit) = 0;

protected:
    std::vector<IObservable*> observables;
};
