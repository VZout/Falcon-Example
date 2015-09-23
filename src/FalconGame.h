/*
 * FalconGame.h
 *
 *  Created on: May 29, 2015
 *      Author: bideb
 */

#ifndef FALCONGAME_H_
#define FALCONGAME_H_

#include "Falcon/Game.h"

class FalconGame : public FF::Game {
public:
	FalconGame();
	virtual ~FalconGame();

	void init();
	void render();
	void update();
};

#endif /* FALCONGAME_H_ */
