#pragma once

#include "Manager.h"

class Article
{
public:
    Article(int id, Manager& manager);
    ~Article();

    int getId() const;
    void print() const;

private:
    static int id;
    Manager& manager;
};
