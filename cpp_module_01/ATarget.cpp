#include "ATarget.hpp"

ATarget::ATarget() : type("") {}

ATarget::ATarget(std::string type) : type(type) {}

ATarget::ATarget(const ATarget &other) : type(other.type) {}

ATarget& ATarget::operator=(const ATarget &other) {
    if (&other != this) {
        this->type = other.type;
    }
    return *this;
}

ATarget::~ATarget() {}

const std::string& ATarget::getType() const {
    return type;
}

void ATarget::getHitBySpell(const ASpell &spell) const {
    std::cout << this->type << " has been " << spell.getEffects() << "!" << std::endl;
}