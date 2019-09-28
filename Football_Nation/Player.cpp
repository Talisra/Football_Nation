#include "player.h"

Player::Player(const char* name, int age, const char* nationality, int attack, int defence, int goalkeeping, int goalScored = 0, int value = 0,
	Team::Role role = (Team::Role)0, Team* currentTeam = nullptr) : Person(name, age, nationality), attack(attack), defence(defence), goalkeeping(goalkeeping), goalScored(goalScored), value(value),
	role(role), currentTeam(currentTeam)
{

}

Player::Player(const Player& other) : Person (other.name, other.age, other.nationality), attack(other.attack), defence(other.defence), goalkeeping(other.goalkeeping), goalScored(other.goalScored),
value(other.value), role(other.role), currentTeam(other.currentTeam)
{

}

int Player::getAttack() const
{
	return attack;
}

int Player::getDefence() const
{
	return defence;
}

int Player::getGoalkeeping() const
{
	return goalkeeping;
}

int Player::getGoalScored() const
{
	return goalScored;
}

int Player::getValue() const
{
	return value;
}

Team::Role Player::getRole() const
{
	return role;
}

Team* Player::getTeam() const
{
	return currentTeam;
}

void Player::setAttack(int atk)
{
	attack = atk;
}

void Player::setDefence(int def)
{
	defence = def;
}

void Player::setGoalkeeping(int goalkeeping)
{
	goalkeeping = goalkeeping;
}

void Player::setValue(int val)
{
	value = val;
}

void Player::setRole(Team::Role role)
{
	this->role = role;
}

void Player::setTeam(Team* team)
{
	this->currentTeam = team;
}

Player Player::operator++(int)
{
	goalScored++;
}

bool Player::operator>=(const Player& player) const
{
	if (this->goalScored >= player.getGoalScored())
		return true;
	else
		return false;
}