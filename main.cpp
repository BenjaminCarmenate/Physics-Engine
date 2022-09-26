#include <iostream>
#include <string.h>
#include <stdio.h>
#include "StateBody.cpp"

int main(int argc, char const *argv[]) {
  StateBody *dummy = new StateBody("Ben", 19);
  dummy->printName();
  dummy->printAge();
  return 0;
}
