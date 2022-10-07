//
// Created by Pesho on 10/7/2022.
//
#pragma once

#include "ServerBaseBookComponent.h"
#include <vector>

struct Edition {
    const std::string title;
    const std::string author;
    const std::string keywords;
};

class ServerMagazineComponent : public ServerBaseBookComponent{
public:
    ServerMagazineComponent();
    ServerMagazineComponent(const std::string&& name,const std::string&& publisher, const std::string&& genre,
                             const std::string&& description, const int&& rating, const int&& id, const int&& ISBN,
                             const Date&& date,const int&& quantity);
    const int& GetQuantity() const;
    std::vector<Edition>& GetEditions();
private:
const int quantity;
std::vector<Edition> editions;

};
