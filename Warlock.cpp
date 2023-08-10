#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title) : name(name), title(title)
{
	std::cout << this->getName() << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << this->getName() << ": My job here is done!" << std::endl;
	std::map<std::string, ASpell *>::iterator it = this->book.begin();
	while (it != this->book.end())
	{
		delete it->second;
		++it;
	}
	this->book.clear();
}

std::string const &Warlock::getName() const
{
	return (this->name);
}

std::string const &Warlock::getTitle() const
{
	return (this->title);
}

void Warlock::setTitle(std::string const &title)
{
	this->title = title;
}

void Warlock::introduce() const
{
	std::cout << this->getName() << ": I am " << this->getName() << ", " << this->getTitle() << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *sp)
{
	if (sp == NULL)
		return ;
	std::map<std::string, ASpell *>::iterator find = this->book.find(sp->getName());
	if (find == this->book.end())
		this->book[sp->getName()] = sp;
}

void Warlock::forgetSpell(std::string const &spName)
{
	std::map<std::string, ASpell *>::iterator find = this->book.find(spName);
	if (find != this->book.end())
		this->book.erase(find);
}

void Warlock::launchSpell(std::string const &spName, ATarget const &target) const
{
	try {
	ASpell *x = this->book.at(spName);
		x->launch(target);
	} catch (...) {}
}

