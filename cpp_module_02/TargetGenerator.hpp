#pragma once

#include "ATarget.hpp"
#include <vector>

class TargetGenerator {
private:
    std::vector<ATarget*> learnedTarget;

    TargetGenerator(const TargetGenerator &);
    TargetGenerator& operator=(const TargetGenerator &);

public:
    TargetGenerator();
    ~TargetGenerator();

    void learnTargetType(ATarget*);
    void forgetTargetType(std::string const &);
    ATarget* createTarget(std::string const &);
};