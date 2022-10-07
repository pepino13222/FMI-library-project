//
// Created by Pesho on 10/7/2022.
//

#include "ServerBaseBookComponent.h"
//Base constructor
ServerBaseBookComponent::ServerBaseBookComponent() : ISBN(0), id(0), rating(0){
}

ServerBaseBookComponent::ServerBaseBookComponent(const std::string &&name, const std::string &&publisher,
                                                 const std::string &&genre, const std::string &&description,
                                                 const int &&rating, const int &&id, const int &&ISBN, const Date&& date) : name(name), publisher(publisher),
                                                 genre(genre), description(description), rating(rating), id(id), ISBN(ISBN), date(date){}

const std::string &ServerBaseBookComponent::GetName() const {
    return name;
}

const std::string &ServerBaseBookComponent::GetPublisher() const {
    return publisher;
}

const std::string &ServerBaseBookComponent::GetGenre() const {
    return genre;
}

const std::string &ServerBaseBookComponent::GetDescription() const {
    return description;
}

const int &ServerBaseBookComponent::GetRating() const {
    return rating;
}

const int &ServerBaseBookComponent::GetId() const {
    return id;
}

const int &ServerBaseBookComponent::GetNomer() const {
    return ISBN;
}

ServerBaseBookComponent::~ServerBaseBookComponent() = default;



