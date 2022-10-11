//
// Created by Pesho on 10/7/2022.
//

#include "ServerLibraryComponent.h"

const int ServerLibraryComponent::GetIndexOfBook(const book& toSearch)
{
    auto size = books.size();
    for (size_t i = 0; i < size; i++) 
    {
        if (books[i] == toSearch)
        {
            return i;
        }
    }
    return -1;
}

const int ServerLibraryComponent::GetIndexOfUser(const user& toSearch)
{
    auto size = users.size();
    for (size_t i = 0; i < size; i++)
    {
        if (users[i] == toSearch)
        {
            return i;
        }
    }
    return -1;
}

void ServerLibraryComponent::AddUser(const user toAdd)
{
    if (GetIndexOfUser(toAdd) != -1)
    {
        users.push_back(toAdd);
    }
}

void ServerLibraryComponent::AddBook(const book toAdd)
{
    if (GetIndexOfBook(toAdd) != -1)
    {
        books.push_back(toAdd);
    }
}

bool ServerLibraryComponent::RemoveUser(const user&& toRemove)
{
    bool status = false;
    std::vector <user> newVector;
    for (auto temp : users)
    {
        if (temp == toRemove)
        {
            status = true;
            continue;
        }
        newVector.push_back(temp);
    }
    users = newVector;
    return status;
}

bool ServerLibraryComponent::RemoveBook(const book&& toRemove)
{
    bool status = false;
    std::vector <book> newVector;
    for (auto temp : books)
    {
        if (temp == toRemove)
        {
            status = true;
            continue;
        }
        newVector.push_back(temp);
    }
    books = newVector;
    return status;
}
