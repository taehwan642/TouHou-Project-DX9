#pragma once
#include "Sprite.h"
class Player :
	public Sprite
{
public:
	Player();
	void Update() override;
};

class PlayerMNG : public Singleton<PlayerMNG>
{

};