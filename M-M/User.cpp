#include <iostream>

#include "User.h"

int User::id = 0;

User::User(Manager& manager)
    : manager(manager)
{
    User::id += 1;
    this->innerId = User::id;
}

User::~User()
{

}

int User::getId() const
{
    return this->innerId;
}

void User::like(Article& article)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    this->manager.likeArticle(this->innerId, article.getId());
}

void User::print() const
{
    std::cout << "User: " << this->innerId << " ---> ";

    if (manager.getFavourites(this->innerId).empty())
    {
        return;
    }

    int limit = manager.getFavourites(this->innerId).size() - 1;
    for (int i = 0; i < limit; i++)
    {
        std::cout << manager.getFavourites(this->innerId).at(i) << ", ";
    }

    std::cout << manager.getFavourites(this->innerId).at(limit) << std::endl;
}
