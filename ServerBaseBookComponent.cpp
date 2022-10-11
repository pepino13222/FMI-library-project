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
                                                 genre(genre), description(description), rating(rating), id(id), ISBN(ISBN), date(date), isTaken(false){}

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

const Date& ServerBaseBookComponent::GetDate() const
{
    return date;
}

ServerBaseBookComponent& ServerBaseBookComponent::operator=(const ServerBaseBookComponent& other)
{
    if (this != &other)
    {
        copy(other);
    }
    return *this;
}

bool ServerBaseBookComponent::operator==(const ServerBaseBookComponent& other)
{
    if (this->date == other.date && this->description == other.description && this->genre == other.genre &&
        this->id == other.id && this->ISBN == other.ISBN && this->isTaken == other.isTaken && this->name == other.name && this->publisher == other.publisher &&
        this->rating == other.rating) 
   {
        return true;
   }
    return false;
}

bool ServerBaseBookComponent::operator!=(const ServerBaseBookComponent& other)
{
    return !(*this==other);
}

ServerBaseBookComponent::~ServerBaseBookComponent() = default;

void ServerBaseBookComponent::copy(const ServerBaseBookComponent & other)
{
    if (this != &other)
    {
        *this = ServerBaseBookComponent(std::move(other.name),std::move( other.publisher),std::move( other.genre), std::move(other.description),std::move( other.rating),std::move( other.id),
            std::move(other.ISBN), std::move(other.date));
    }

}



