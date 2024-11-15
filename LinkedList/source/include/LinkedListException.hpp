#ifndef LINKEDLISTEXCEPTION
#define LINKEDLISTEXCEPTION

#include <exception>
#include <string>

using namespace std;

class LinkedListException : public exception {
 private:
  const char* message;

 public:
  LinkedListException(const char* message);
  const char* what() const noexcept override;
};

#endif  // LINKEDLISTEXCEPTION