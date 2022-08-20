#include <iostream>

#include "Article.h"

Article::Article(int id)
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
    std::cout << "Article: " << this->id << std::endl;
}
