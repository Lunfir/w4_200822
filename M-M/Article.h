#pragma once

#include "Manager.h"

class Article
{
public:
    Article(Manager& manager);
    ~Article();

    int getId() const;
    void print() const;

private:
    static int id;
    
    int innerId;
    Manager& manager;
};
