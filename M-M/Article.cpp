#include <iostream>

#include "Article.h"

int Article::id = 12;

Article::Article(int id, Manager& manager)
    : manager(manager)
{
    this->id = id;
}

Article::~Article()
{

}

int Article::getId() const
{
    return this->id;
}


void Article::print() const
{
    std::cout << "Article: " << this->id << " ---> ";

    if (manager.getLikes(this->id).empty())
    {
        return;
    }

    int limit = manager.getLikes(this->id).size() - 1;
    for (int i = 0; i < limit; i++)
    {
        std::cout << manager.getLikes(this->id).at(i) << ", ";
    }

    std::cout << manager.getLikes(this->id).at(limit) << std::endl;
}
