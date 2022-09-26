#include <iostream>
#include <string.h>
#include <stdio.h>
#include "StateBody.cpp"

int main(int argc, char const *argv[]) {
  StateBody *dummy = new StateBody(50, 0);
  std::cout << "MASS: " << dummy->getMass() << std::endl;
  std::cout << "OLD POSITION: " << dummy->getOldPos() << std::endl;
  for(int i = 0; i < 10; i++)
  {
    dummy->addForce2DByComponent(10-2*i, i);
    std::cout << "NETFORCE MAG: " << dummy->getNetForce()->computeMagnitude() << std::endl;
    std::cout << "NETFORCE DIR: " << dummy->getNetForce()->computeDirectionDegree()<< std::endl;
    std::cout << "NETFORCE IHAT: " << dummy->getNetForce()->getI() << std::endl;
    std::cout << "NETFORCE JHAT: " << dummy->getNetForce()->getJ()<< "\n" << std::endl;
  }

  return 0;
}
