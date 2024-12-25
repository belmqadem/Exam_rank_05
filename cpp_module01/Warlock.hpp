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

<<<<<<< HEAD
	std::string const &getName() const;
	std::string const &getTitle() const;
	void setTitle(const std::string title);
	void introduce() const;
=======
    std::string const &getName() const;
    std::string const &getTitle() const;
    void setTitle(const std::string title);
    void introduce() const;
>>>>>>> b7dfb5b5a1d6e3b1f2384a8e6d2d6443d88560aa

	void learnSpell(ASpell *spell);
	void forgetSpell(std::string spellName);
	void launchSpell(std::string spellName, ATarget &target);
};