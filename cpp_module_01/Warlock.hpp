#pragma once

#include "ASpell.hpp"
#include <vector>

class Warlock
{
private:
	std::string name;
	std::string title;
	std::vector<ASpell *> learned;

	Warlock(const Warlock &);
	Warlock &operator=(Warlock const &);

public:
	Warlock(std::string name, std::string title);
	~Warlock();

	std::string const &getName() const;
	std::string const &getTitle() const;
	void setTitle(const std::string title);
	void introduce() const;

	void learnSpell(ASpell *spell);
	void forgetSpell(std::string spellName);
	void launchSpell(std::string spellName, ATarget &target);
};