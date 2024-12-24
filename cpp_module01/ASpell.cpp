#include "ASpell.hpp"

ASpell::ASpell() : name(""), effects("") {}

ASpell::ASpell(std::string name, std::string effects) : name(name), effects(effects) {}

ASpell::ASpell(const ASpell &other) : name(other.name), effects(other.effects) {}

ASpell& ASpell::operator=(const ASpell &other) {
    name = other.name;
    effects = other.effects;
    return *this;
}

ASpell::~ASpell() {}

std::string ASpell::getName() const {
    return name;
}

std::string ASpell::getEffects() const {
    return effects;
}

void ASpell::launch(const ATarget &target) const {
    target.getHitBySpell(*this);
}