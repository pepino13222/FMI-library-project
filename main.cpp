#include <iostream>
#include "ServerBaseBookComponent.h"
#include "Date.h"
#include "ServerBookComponent.h"
#include "ServerMagazineComponent.h"
#include "ServerBaseUserComponent.h"
#include "ServerSideLibrary.h"
#include "ServerLibraryComponent.h"
#include "ServerAdminUserComponent.h"
#include "ServerNormalUserComponent.h"

int main()
{

    auto* library = ServerLibraryComponent::GetLibrary();


    user UserTest1 = new ServerAdminUserComponent("username", "password", Date(), "email", "departent");
    user UserTest2 = new ServerNormalUserComponent("test2", "test2", Date());

    library->AddUser(UserTest1);
    library->AddUser(UserTest2);


    std::string command;

    while (command != "stop")
    {
        std::cin >> command;
        if (command == "login")
        {
            printf("Username: ");
            std::string username;
            std::cin >> username;
            std::string password;
            printf("Password: ");
            std::cin >> password;
            library->Login(username, password);
        }
        else if(command == "Logout")
        {
            library->Logout();
        }
        else if(command == "book all")
        {
            library->BookAll();
        }
        else if(command == "series all")
        {
            library->SeriesAll();
        }
    }
    delete library;
    return 0;
}
