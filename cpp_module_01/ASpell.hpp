#pragma once

#include <iostream>

class ASpell {
protected:
    std::string name;
    std::string effects;

public:
    ASpell();
    ASpell(std::string name, std::string effects);
    ASpell(const ASpell &);
    ASpell& operator=(const ASpell &);
    ~ASpell();

    std::string getName() const;
    std::string getEffects() const;

    virtual ASpell* clone() const = 0;
};