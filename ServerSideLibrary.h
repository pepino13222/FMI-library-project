//
// Created by Pesho on 10/10/2022.
//

#pragma once

#include "ServerBaseUserComponent.h"
#include "ServerBaseBookComponent.h"

class ServerSideLibrary {

public:
    void AddBook(const ServerBaseBookComponent book);
    void AddUser(const ServerBaseUserComponent user);
    void CheckIfUserIsAdmin(const ServerBaseUserComponent&& user);
    bool CheckIfUserExists(const ServerBaseUserComponent&& user);

private:
    std::vector<ServerBaseBookComponent*>books;
    std::vector<ServerBaseUserComponent*>users;

    ServerSideLibrary();

};

