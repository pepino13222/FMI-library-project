//
// Created by Pesho on 10/7/2022.
//

#pragma once
#include <string>
#include "Date.h"

class ServerBaseBookComponent {

public:

    ServerBaseBookComponent();
    ServerBaseBookComponent(const std::string&& name,const std::string&& publisher, const std::string&& genre,
                            const std::string&& description, const int&& rating, const int&& id, const int&& ISBN,
                            const Date&& date);



    const std::string& GetName() const;
    const std::string& GetPublisher()const ;
    const std::string& GetGenre() const;
    const std::string& GetDescription() const;

    const int& GetRating() const;
    const int& GetId() const;
    const int& GetNomer() const;
    const Date& GetDate() const;
 ~ServerBaseBookComponent();
private:
    const std::string name;
    const std::string publisher;
    const std::string genre;
    const std::string description;
    const Date date;
    const int rating;
    const int id;
    const int ISBN;
};

