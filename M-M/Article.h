#pragma once

class Article
{
public:
    Article(int id);
    ~Article();

    int getId() const;
    void print() const;

private:
    int id;
};
