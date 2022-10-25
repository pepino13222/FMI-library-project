//
// Created by Pesho on 10/7/2022.
//
#pragma once

#include "ServerBaseUserComponent.h"
#include "ServerBaseBookComponent.h"

typedef ServerBaseBookComponent* book;
typedef ServerBaseUserComponent* user;

class ServerLibraryComponent {

public:

	const int GetIndexOfBook(const book& toSearch);
	const int GetIndexOfUser(const user& toSearch);
	void AddUser(const user toAdd);
	void AddBook(const book toAdd);
	bool RemoveUser(const user&& toRemove);
	bool RemoveBook(const book&& toRemove);
	user GetUser(const std::string username);
	void Login(const std::string& username, const std::string& password);
	void Logout();
	void ChangeCurrentDate(const Date& date);
	user& GetCurrentlyLoggedIn();
	static ServerLibraryComponent* GetLibrary();

    const void BookAll() const;
    const void SeriesAll();


	ServerLibraryComponent(ServerLibraryComponent& other) = delete;
	void operator =(const ServerLibraryComponent& other) = delete;

protected:
	ServerLibraryComponent();
	static ServerLibraryComponent library;
	std::vector <user> users;
	std::vector <book> books;
	user currentlyLoggedIn = nullptr;
	Date currentDate;
};



