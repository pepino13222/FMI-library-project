//
// Created by Pesho on 10/7/2022.
//

#pragma once
#include "ServerBaseBookComponent.h"
#include "Date.h"

class ServerBookComponent : public ServerBaseBookComponent{

public:

    ServerBookComponent();
    ServerBookComponent(const std::string &&name, const std::string &&publisher,
                        const std::string &&genre, const std::string &&description,
                        const int &&rating, const int &&id, const int &&ISBN, const std::string&& author,  const Date&& date)
                        : ServerBaseBookComponent(std::move(name),std::move(publisher),std::move(genre),std::move(description),std::move(rating),std::move(id),std::move(ISBN)
                        ,std::move(date))
                        , author(author)
                        {}

    const std::string& GetAuthor();
private:
    const std::string author;
};



