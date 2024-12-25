#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) : name(name), title(title)
{
	std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << name << ": My job here is done!" << std::endl;
	for (std::vector<ASpell *>::iterator it = learned.begin(); it != learned.end(); ++it)
	{
		delete (*it);
	}
	learned.clear();
}

std::string const &Warlock::getName() const
{
	return name;
}

std::string const &Warlock::getTitle() const
{
	return title;
}

void Warlock::setTitle(const std::string title)
{
	this->title = title;
}

void Warlock::introduce() const
{
	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *spell)
{
	if (!spell)
		return;

	for (std::vector<ASpell *>::iterator it = learned.begin(); it != learned.end(); ++it)
	{
		if (spell->getName() == (*it)->getName())
			return;
	}
	learned.push_back(spell->clone());
}

void Warlock::forgetSpell(std::string spellName)
{
	for (std::vector<ASpell *>::iterator it = learned.begin(); it != learned.end(); ++it)
	{
		if (spellName == (*it)->getName())
		{
			delete (*it);
			learned.erase(it);
			return;
		}
	}
}

void Warlock::launchSpell(std::string spellName, ATarget &target)
{
	for (std::vector<ASpell *>::iterator it = learned.begin(); it != learned.end(); ++it)
	{
		if (spellName == (*it)->getName())
		{
			(*it)->launch(target);
			return;
		}
	}
}