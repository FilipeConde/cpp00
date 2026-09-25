#include "PhoneBook.hpp"

PhoneBook::~PhoneBook() {};

PhoneBook::PhoneBook() : _count(0), _next(0) {}

int PhoneBook::getCount() { return _count; }
int PhoneBook::getNext() { return _next; }