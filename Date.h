//
// Created by Pesho on 10/7/2022.
//
#pragma once
#include <iostream>
class Date {

    public:

    Date();
    Date(const int&& month, const int&& year);
    Date(const Date& other);
    Date(const Date&& other);

    const int& GetMonth() const;
    const int& GetYear() const;

    void SetYear(const int&& other);
    void SetMonth(const int&& other);

private:
    int month;
    int year;

    void copy(const Date&& other);
};



