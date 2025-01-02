#include "Fireball.hpp"

Fireball::Fireball()
{
	this->name = "Fireball";
	this->effects = "burnt to a crisp";
}

ASpell *Fireball::clone() const
{
	return new Fireball();
}