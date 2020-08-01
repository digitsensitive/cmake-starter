#pragma once

class Boilerplate {
 public:
  Boilerplate();
  ~Boilerplate();

  void printMessage();

 private:
  const char* mWelcomeMessage;
};