/*
 * Monkey.h
 *
 *  Created on: May 18, 2015
 *      @Author: Viktor Zoutman
 *		@Version: 1.0
 */

#ifndef MONKEY_H_
#define MONKEY_H_

#include <Falcon/Common/GameObject.h>
#include <glm/glm.hpp>
#include <Falcon/Common/Transform.h>

class Monkey : public FF::GameObject {
public:
	Monkey(FF::Transform transform);
	virtual ~Monkey();

	void init();
	void render();
	void update();
};

#endif /* MONKEY_H_ */
