//
// Created by Pesho on 10/7/2022.
//

#include "Date.h"

Date::Date() : month(0), year(0){

}

Date::Date(const int &&month, const int &&year) : month(month), year(year){
}

Date::Date(const Date &other) {
    copy(std::move(other));
}

const int& Date::GetMonth() const {
        return month;
}

const int& Date::GetYear() const {
    return year;
}

void Date::SetYear(const int &&other) {
    year = other;
}

void Date::SetMonth(const int &&other) {
    month = other;
}

void Date::copy(const Date &&other) {
    this->year = other.year;
    this->month = other.month;
}

Date::Date(const Date &&other)  {
    copy(std::move(other));
}

 Date &Date::operator=(const Date&& other) {
    copy(std::move(other));
    return *this;
}
