#pragma once
#include "AbstractComponent.h"
#include "GameObjectPool.h"

class EnemySwarmHandler : public AbstractComponent {
public: 
	EnemySwarmHandler(int numEnemis, std::string name, AGameObject* parent);
	~EnemySwarmHandler();
	void perform();
private:
	GameObjectPool* enemyPool;
	const float SPAWN_INTERVAL = 0.01f;
	float ticks = 0.0f;
};