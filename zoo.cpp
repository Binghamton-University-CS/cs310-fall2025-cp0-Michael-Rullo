#include <iostream>
#include <stdlib.h>
#include "Animal.h"

int main() {
   Animal *animal1 = new Animal("African Elephant", 1758);
   Animal animal2("Giant Panda", 1869);
   Animal animal3("Siberian Tiger", 1844);
   AnimalsInZoo *containment = new AnimalsInZoo(animal3);

   
   delete animal1;
   animal1 = new Animal("Snow Leopard", 1777);
   
   animal3.display();
   animal2.display();
   animal1->display();

   delete animal1;
};
