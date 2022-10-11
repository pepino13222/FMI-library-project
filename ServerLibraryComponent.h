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

private:
	std::vector <user> users;
	std::vector <book> books;
};



