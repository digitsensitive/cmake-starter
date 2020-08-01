#include "boilerplate.h"

#include <iostream>

Boilerplate::Boilerplate() {
  std::cout << "Calling Constructor. " << std::endl;
  mWelcomeMessage = "Hello World!";
};

Boilerplate::~Boilerplate() {
  std::cout << "Calling Destructor. " << std::endl;
};

void Boilerplate::printMessage() { std::cout << mWelcomeMessage << std::endl; };