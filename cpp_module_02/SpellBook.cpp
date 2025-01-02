#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook() {}

void SpellBook::learnSpell(ASpell *spell)
{
	if (!spell) return;
	for (std::vector<ASpell *>::iterator it = book.begin(); it != book.end(); ++it)
	{
		if (spell->getName() == (*it)->getName())
			return;
	}
	book.push_back(spell->clone());
}

void SpellBook::forgetSpell(std::string const &spellName)
{
	for (std::vector<ASpell *>::iterator it = book.begin(); it != book.end(); ++it)
	{
		if ((*it)->getName() == spellName)
		{
			book.erase(it);
			return;
		}
	}
}

ASpell *SpellBook::createSpell(std::string const &spellName)
{
	for (std::vector<ASpell *>::iterator it = book.begin(); it != book.end(); ++it)
	{
		if ((*it)->getName() == spellName)
			return (*it)->clone();
	}
	return NULL;
}