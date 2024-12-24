#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() {}

void TargetGenerator::learnTargetType(ATarget* target) {
    if (!target) return;

    for (std::vector<ATarget*>::iterator it = learnedTarget.begin(); it != learnedTarget.end(); ++it) {
        if (target->getType() == (*it)->getType())
            return ;
    }
    learnedTarget.push_back(target->clone());
}

void TargetGenerator::forgetTargetType(std::string const &targetName) {
    for (std::vector<ATarget*>::iterator it = learnedTarget.begin(); it != learnedTarget.end(); ++it) {
        if (targetName == (*it)->getType()) {
            delete (*it);
            learnedTarget.erase(it);
            return ;
        }
    }
}

ATarget* TargetGenerator::createTarget(std::string const &targetName) {
    for (std::vector<ATarget*>::iterator it = learnedTarget.begin(); it != learnedTarget.end(); ++it) {
        if (targetName == (*it)->getType()) {
            return (*it)->clone();
        }
    }
    return NULL;
}