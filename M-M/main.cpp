#include <iostream>

#include "Article.h"
#include "Manager.h"
#include "User.h"

int main()
{
    Article art1, art2, art3;
    User user1, user2;

    user1.like(art1);

    user2.like(art1);
    user2.like(art2);
    user2.like(art3);

    // TODO: user2.like({art1, art2, art3});

    user1.print();
    user2.print();

    art1.print();
    art2.print();

    return 0;
}
