#include "Warlock.hpp"

int main()
{
  Warlock richard("Richard", "the Titled");

  Dummy bob;
  Fwoosh* fwoosh = new Fwoosh();

  richard.learnSpell(fwoosh);

  richard.introduce();
  richard.launchSpell("Fwoosh", bob);

  std::string Fwoosh = "Fwoosh";
  richard.forgetSpell(Fwoosh);
  std::cout << "Spell forgotten" << std::endl;
  richard.launchSpell("Fwoosh", bob);

  std::cout << "Test get spell back" << std::endl;
  richard.learnSpell(fwoosh);
  richard.launchSpell("Fwoosh", bob);
}
