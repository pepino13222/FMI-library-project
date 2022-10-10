//
// Created by Pesho on 10/7/2022.
//

#pragma once;

#include "ServerBaseUserComponent.h"

class ServerAdminUserComponent : public ServerBaseUserComponent{
public:
    ServerAdminUserComponent();
    ServerAdminUserComponent(const std::string&& username, const std::string&& password, const Date&& dateOfRegistration,
                             const std::string&& email, const std::string&& department);
    const std::string& GetEmail() const;
    const std::string& GetDepartment() const;
    const bool IsAdmin() override;
private:
    const std::string email;
    const std::string department;
};



