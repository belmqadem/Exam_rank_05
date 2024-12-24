#pragma once

#include <iostream>

class ATarget {
protected:
    std::string type;

public:
    ATarget();
    ATarget(const ATarget &);
    ATarget& operator=(const ATarget &);
    ~ATarget();

    std::string getType() const;
    
};