#include <stdlib.h>
#include <iostream>
#include "Animal.h"

class AnimalsInZoo {
 public:
  AnimalsInZoo(Animal passedAnimal) {
    animal = passedAnimal;
    numAnimals = 1;
  }
  AnimalsInZoo() {
    numAnimals = 0;
  }
  void display();

 private:
  int numAnimals;
  Animal animal;
};
