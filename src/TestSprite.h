/*
 * TestSprite.h
 *
 *  Created on: May 31, 2015
 *      Author: bideb
 */

#ifndef TESTSPRITE_H_
#define TESTSPRITE_H_

#include <Falcon/Graphics/Sprite.h>

class TestSprite : public FF::Sprite {
public:
	TestSprite(glm::vec2 pos);
	virtual ~TestSprite();
};

#endif /* TESTSPRITE_H_ */
