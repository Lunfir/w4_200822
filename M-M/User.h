#pragma once

#include "Article.h"
#include "Manager.h"

class User
{
public:
    User();
    ~User();

    int getId() const;
    void like(Article& article);

    void print() const;

private:
    static int id;
    
    int innerId;
};
