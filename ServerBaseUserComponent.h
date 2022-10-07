//
// Created by Pesho on 10/7/2022.
//

#pragma once
#include <string>
#include "Date.h"
#include "ServerBaseBookComponent.h"
#include <vector>

class ServerBaseUserComponent {

public:
    ServerBaseUserComponent();
    ServerBaseUserComponent(const std::string&& username, const std::string&& password, const Date&& dateOfRegistration);

    void ChangePassword(const std::string&& other);
    void ChangeLastLogin(const Date&& other);
    const std::string& GetUsername();
    const std::string& GetPassword();
    const Date& GetLastLogin();
    const Date& GetDateOfRegistration();
    std::vector<ServerBaseBookComponent*>& GetCollection();
private:
    const std::string username;
    std::string password;
    std::vector<ServerBaseBookComponent*> collection;
    const Date dateOfRegistration;
    Date lastLogin;
};


