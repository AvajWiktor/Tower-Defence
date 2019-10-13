#pragma once
#include<SFML\Graphics.hpp>
#include<list>
#include<vector>
#include "cPocisk.h"

 class cBron :public sf::Drawable
{
public:
	

	cBron();
	~cBron();
	void cBron::shoot(std::list<cPocisk*> &p, Vector2f pos);
	void cBron::draw(sf::RenderTarget& target, sf::RenderStates state) const;
	bool cBron::upgrade(int &gold);
	void cBron::move(sf::Vector2f distance);
	void cBron::setPosition(sf::Vector2f xy);
	sf::Vector2f cBron::getPosition();
	int cBron::getDmg();
	int cBron::getPrice();
	int cBron::getAttackSpeed();
	int cBron::getLvl();
	int cBron::getRange();
	sf::Sprite cBron::getTower();
	int cBron::getUpgradeCost();
	sf::CircleShape cBron::getRangeSphere();
	void cBron::setTexSize(float value);
	bool cBron::collisionWithMouse(sf::Vector2f coordinates);
	char cBron::getType();
	void cBron::setType(char type);
	void cBron::animate();

protected:
	
	
	void cBron::setTex(std::string direction);
	void cBron::setDmg(int dmg);
	void cBron::setPrice(int price);
	void cBron::setAttackSpeed(int as);
	void cBron::setLvl(int lvl);
	void cBron::setRange(int range);
	
	void cBron::setUpgradeCost(int value);
	
	void cBron::setRangeSphere();
	

private:
	sf::Sprite tower_;
	sf::Texture text_;
	int price_;
	int attack_speed_;
	int dmg_;
	int range_;
	int lvl_;
	int upgrade_cost_;
	float radius_=50.0;
	sf::Vector2f center_;
	sf::CircleShape rangeSphere_;
	char type_=NULL;
	int timer_=0;
	bool shootAcces_;
	float angle_;
};
