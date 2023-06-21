#include <iostream>
#include "prueba.hpp"

int main()
{
  Warlock richard("Richard", "Mistress of Magma");
  //richard.introduce();
  std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;
  Warlock arturo("Arturo", "Magnetum filter");

  Warlock* jack = new Warlock("Jack", "the Long");
  std::cout << jack->getName() << " - " << jack->getTitle() << std::endl;

  //jack->introduce();
  jack->setTitle("the Mighty");
  std::cout << jack->getName() << " - " << jack->getTitle() << std::endl;

  richard = arturo;
  std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;

  //jack->introduce();

  delete jack;

  return (0);
}
