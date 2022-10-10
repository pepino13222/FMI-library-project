//
// Created by Pesho on 10/7/2022.
//

#pragma once
#include "ServerBaseUserComponent.h"

class ServerNormalUserComponent : public ServerBaseUserComponent{

public:
    ServerNormalUserComponent();
    ServerNormalUserComponent(const std::string&& username, const std::string&& password, const Date&& dateOfRegistration);
    const bool IsAdmin() override;
};

