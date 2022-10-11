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
