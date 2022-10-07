//
// Created by Pesho on 10/7/2022.
//

#pragma once;
#include <string>
class ServerBaseBookComponent {

public:

    ServerBaseBookComponent();
    ServerBaseBookComponent(const std::string&& name,const std::string&& publisher, const std::string&& genre,
                            const std::string&& description, const int&& rating, const int&& id, const int&& ISBN);



    const std::string& GetName() const;
    const std::string& GetPublisher()const ;
    const std::string& GetGenre() const;
    const std::string& GetDescription() const;

    const int& GetRating() const;
    const int& GetId() const;
    const int& GetNomer() const;

 ~ServerBaseBookComponent();
private:
    const std::string name;
    const std::string publisher;
    const std::string genre;
    const std::string description;
    const int rating;
    const int id;
    const int ISBN;
};

