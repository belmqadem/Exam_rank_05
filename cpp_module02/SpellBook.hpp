#pragma once

#include "ASpell.hpp"
#include <vector>

class SpellBook {
private:
    std::vector<ASpell*> book;

    SpellBook(const SpellBook &);
    SpellBook& operator=(const SpellBook &);

public:
    SpellBook();
    ~SpellBook();

    void learnSpell(ASpell*);
    void forgetSpell(std::string const &);
    ASpell* createSpell(std::string const &);
};