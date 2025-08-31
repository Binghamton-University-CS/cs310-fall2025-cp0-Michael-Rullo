#include <iostream>
#include <stlib.h>
#include "AnimalsInZoo.h"
#include "Animal.h"

void AnimalsInZoo::display() {
  std::cout << "Number of Animals: " << numAnimals << std::endl;
  if (numAnimals > 0) {
    Animal.display();
  }
}
