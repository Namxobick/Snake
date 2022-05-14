#pragma once

#include "Snake.h"
#include "GameMap.h"
#include "Food.h"
class Game
{
private:
	const int StartSpeed = 30;
	GameMap _gameMap;
	Snake _snake;
	Food _food;

	int _score;
	int _speed;

	void SpawnFood();

public:
	Game();

	void ClearScreen();
	void CheckEating();
	void Start();

	bool ReGame();
	bool CkeckHittingWall();
	bool CheckHittingHimself();

	char Controls();
	
};

