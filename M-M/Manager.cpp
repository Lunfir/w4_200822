#include "Manager.h"

Manager::Manager()
{

}

Manager::~Manager()
{

}

void Manager::likeArticle(int userID, int artID)
{
    // add art Id to favourites of concrete user
    // if (id is in map)
    // {
    //     get vector, push_back value
    // }
    // else
    // {
    //      add key(id), get vector, push_back value
    // }
    std::vector<int>& tmpFavourites = favourites[userID];
    tmpFavourites.push_back(artID);

    // add user's like to article with id artID
    likes[artID].push_back(userID);
}

std::vector<int> Manager::getFavourites(int userID) const
{
    // if (favourites.contains(userID))
    // {
    //     return favourites.at(userID);
    // }

    // return std::vector<int>();

    if (favourites.find(userID) == favourites.end())
    {
        return std::vector<int>();
    }

    return favourites.at(userID);
}

std::vector<int> Manager::getLikes(int artID) const
{
    // if (likes.contains(artID))
    // {
    //     return likes.at(artID);
    // }

    // return std::vector<int>();
    if (likes.find(artID) == likes.end())
    {
        return std::vector<int>();
    }

    return likes.at(artID);
}
