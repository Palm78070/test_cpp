#include "ATarget.hpp"

ATarget::ATarget(std::string const &type) : type(type)
{
}

ATarget::~ATarget()
{
}

std::string const &ATarget::getType() const
{
	return (this->type);
}

void ATarget::getHitBySpell(ASpell const &sp) const
{
	std::cout << this->getType() << " has been " << sp.getEffects() << "!" << std::endl;
}
