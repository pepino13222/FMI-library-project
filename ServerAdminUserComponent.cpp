//
// Created by Pesho on 10/7/2022.
//

#include "ServerAdminUserComponent.h"

ServerAdminUserComponent::ServerAdminUserComponent()
{}

ServerAdminUserComponent::ServerAdminUserComponent(const std::string &&username, const std::string &&password,
                                                   const Date &&dateOfRegistration, const std::string &&email,
                                                   const std::string &&department) : ServerBaseUserComponent(std::move(username),std::move(password),std::move(dateOfRegistration)),
                                                   email(email), department(department)
{}

const std::string &ServerAdminUserComponent::GetEmail() const {
    return email;
}

const std::string &ServerAdminUserComponent::GetDepartment() const {
    return department;
}
