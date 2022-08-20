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

const std::vector<int>& Manager::getFavourites(int userID) const
{
    return favourites.at(userID);
}

const std::vector<int>& Manager::getLikes(int artID) const
{
    return likes.at(artID);
}
