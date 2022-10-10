//
// Created by Pesho on 10/7/2022.
//

#include "ServerNormalUserComponent.h"

const bool ServerNormalUserComponent::IsAdmin() {
    return ServerBaseUserComponent::IsAdmin();
}

ServerNormalUserComponent::ServerNormalUserComponent() : ServerBaseUserComponent()
{}

ServerNormalUserComponent::ServerNormalUserComponent(const std::string &&username, const std::string &&password,
                                                     const Date &&dateOfRegistration) : ServerBaseUserComponent(
        std::move(username),   std::move(password),   std::move(dateOfRegistration))
{}
