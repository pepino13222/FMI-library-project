//
// Created by Pesho on 10/7/2022.
//

#include "ServerBaseUserComponent.h"

ServerBaseUserComponent::ServerBaseUserComponent()
{}

ServerBaseUserComponent::ServerBaseUserComponent(const std::string &&username, const std::string &&password,
                                                 const Date &&dateOfRegistration) : username(username),password(password),dateOfRegistration(dateOfRegistration), lastLogin(dateOfRegistration)
{}

void ServerBaseUserComponent::ChangePassword(const std::string &&other)
{
password = other;
}

void ServerBaseUserComponent::ChangeLastLogin(const Date &&other)
{
    lastLogin = std::move(other);
}

std::vector<ServerBaseBookComponent *> &ServerBaseUserComponent::GetCollection() {
    return collection;
}

const std::string &ServerBaseUserComponent::GetUsername() {
    return username;
}

const std::string &ServerBaseUserComponent::GetPassword() const {
    return password;
}

const Date &ServerBaseUserComponent::GetLastLogin() {
    return lastLogin;
}

const Date &ServerBaseUserComponent::GetDateOfRegistration() {
    return dateOfRegistration;
}

const bool ServerBaseUserComponent::IsAdmin() {
    return false;
}
