#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) : name(name), title(title) {
    std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {
    std::cout << name << ": My job here is done!" << std::endl;
}

std::string Warlock::getName() const {
    return name;
}

std::string Warlock::getTitle() const {
    return title;
}

void Warlock::setTitle(const std::string title) {
    this->title = title;
}

void Warlock::introduce() const {
    std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *spell) {
    if (!spell) return ;

    book.learnSpell(spell);
}

void Warlock::forgetSpell(std::string spellName) {
    book.forgetSpell(spellName);
}

void Warlock::launchSpell(std::string spellName, ATarget& target) {
    if (!book.createSpell(spellName)) return ;
    book.createSpell(spellName)->launch(target);
}