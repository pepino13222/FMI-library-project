//
// Created by Pesho on 10/7/2022.
//

#include "ServerBookComponent.h"

const std::string &ServerBookComponent::GetAuthor() {
    return author;
}

const TypeOfBook ServerBookComponent::GetType() const  {
    return TypeOfBook::BOOK;
}
