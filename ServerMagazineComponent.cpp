//
// Created by Pesho on 10/7/2022.
//

#include "ServerMagazineComponent.h"

ServerMagazineComponent::ServerMagazineComponent() :ServerBaseBookComponent(), quantity(0)
{}

ServerMagazineComponent::ServerMagazineComponent(const std::string &&name, const std::string &&publisher,
                                                 const std::string &&genre, const std::string &&description,
                                                 const int &&rating, const int &&id, const int &&ISBN,
                                                 const Date &&date, const int&& quantity) : ServerBaseBookComponent(std::move(name), std::move(publisher), std::move(genre),
                                                                                              std::move(description), std::move(rating), std::move(id),
                                                                                              std::move(ISBN), std::move(date)), quantity(quantity)
{}

const int &ServerMagazineComponent::GetQuantity() const {
    return quantity;
}

std::vector<Edition> &ServerMagazineComponent::GetEditions() {
    return editions;
}

const TypeOfBook ServerMagazineComponent::GetType() const {
    return TypeOfBook::MAGAZINE;
}
