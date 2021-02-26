#include "Enemy.hpp"

Enemy::Enemy(): _hp(0), _type("????"){}

Enemy::Enemy(int hp, std::string const & type): _hp(hp), _type(type){
}

Enemy::Enemy(const Enemy & src) {
	*this = src;
}

Enemy::~Enemy(){}

Enemy			&Enemy::operator=(Enemy const & rhs) {
	_hp = rhs._hp;
	_type = rhs._type;
	return *this;
}

int				Enemy::getHP() const {
	return _hp;
}

std::string		Enemy::getType() const {
	return _type;
}

void			Enemy::takeDamage(int dmg) {
	
	_hp -= dmg;
	_hp = (_hp < 0) ?  0 : _hp;
}
