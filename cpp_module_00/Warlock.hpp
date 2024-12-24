#pragma once

#include <iostream>

class Warlock {
private:
    std::string name;
    std::string title;

    Warlock(const Warlock &);
    Warlock& operator=(Warlock const &);

public:
    Warlock(std::string name, std::string title);
    ~Warlock();

    std::string const &getName() const;
    std::string const &getTitle() const;
    void setTitle(const std::string& title);
    void introduce() const;
};