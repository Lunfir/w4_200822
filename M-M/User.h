#pragma once

#include "Article.h"
#include "Manager.h"

class User
{
public:
    User(int id, Manager& manager);
    ~User();

    int getId() const;
    void like(Article& article);

    void print() const;

private:
    int id;
    Manager& manager;
};
