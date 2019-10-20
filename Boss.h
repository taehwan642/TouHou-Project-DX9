#pragma once
#include "Sprite.h"
class Boss :
	public Sprite
{
public:
	Boss();
	void Update() override;
};

class BossMNG : public Singleton<BossMNG>
{
public:
	std::unique_ptr<Boss> bos;

	void CreateBoss();
};