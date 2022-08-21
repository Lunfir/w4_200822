#pragma once
#include <iostream>

class IObserver;

class IObservable
{
public:
    virtual void onSubscription(IObserver* observer) = 0;
    virtual void notify() = 0;

protected:
    IObserver* observer;
};