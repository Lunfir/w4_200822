#include <iostream>

#include "Article.h"
#include "Manager.h"
#include "User.h"

int main()
{
    // Article art1, art2, art3;
    // User user1, user2;

    Manager manager;
    Article art1(1);
    Article art2(2);
    Article art3(3);
    User user1(1, manager);
    User user2(2, manager);

    user1.like(art1);

    user2.like(art1);
    user2.like(art2);
    user2.like(art3);

    // user2.like(art1, art2, art3);

    user1.print();
    user2.print();

    art1.print();

    return 0;
}
