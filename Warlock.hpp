#pragma once

#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "Fwoosh.hpp"
#include "Dummy.hpp"
#include <map>

class ASpell;
class ATarget;

class Warlock
{
	private:
		Warlock();
		Warlock(Warlock const &src);
		Warlock &operator=(Warlock const &src);
		std::string name;
		std::string title;
		std::map<std::string, ASpell *> book;

	public:
		Warlock(std::string const &name, std::string const &title);
		~Warlock();
		std::string const &getName() const;
		std::string const &getTitle() const;
		void setTitle(std::string const &title);
		void introduce() const;
		void learnSpell(ASpell *sp);
		void forgetSpell(std::string const &spName);
		void launchSpell(std::string const &spName, ATarget const &target) const;
};
