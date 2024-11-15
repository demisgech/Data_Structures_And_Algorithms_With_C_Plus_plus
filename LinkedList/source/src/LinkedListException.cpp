#include "LinkedListException.hpp"

LinkedListException::LinkedListException(const char* message)
    : message{message} {}

const char* LinkedListException::what() const noexcept { return message; }