#include <iostream>

#include "Article.h"

int Article::id = 0;

Article::Article(Manager& manager)
    : manager(manager)
{
    Article::id += 1;
    this->innerId = Article::id;
}

Article::~Article()
{

}

int Article::getId() const
{
    return this->innerId;
}


void Article::print() const
{
    std::cout << "Article: " << this->innerId << " ---> ";

    if (manager.getLikes(this->innerId).empty())
    {
        return;
    }

    int limit = manager.getLikes(this->innerId).size() - 1;
    for (int i = 0; i < limit; i++)
    {
        std::cout << manager.getLikes(this->innerId).at(i) << ", ";
    }

    std::cout << manager.getLikes(this->innerId).at(limit) << std::endl;
}
