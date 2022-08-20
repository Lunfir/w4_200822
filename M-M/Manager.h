#pragma once

#include <iostream>
#include <vector>
#include <unordered_map>

class Manager
{
public:
    Manager();
    ~Manager();

    void likeArticle(int userID, int artID);

    std::vector<int> getFavourites(int userID) const;
    std::vector<int> getLikes(int artID) const;

private:
    std::unordered_map<int, std::vector<int>> favourites;
    std::unordered_map<int, std::vector<int>> likes;
};
