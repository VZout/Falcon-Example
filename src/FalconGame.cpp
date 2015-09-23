/*
 * FalconGame.cpp
 *
 *  Created on: May 29, 2015
 *      Author: bideb
 */

#include "FalconGame.h"

#include <Falcon/Graphics/Camera.h>
#include <glm/glm.hpp>

#include "Monkey.h"
#include "TestSprite.h"

FF::Camera cam(glm::vec3(0, 0, -4), 70.0f, 720 / 720, 0.01f, 1000.0f);
//FF::Camera cam(glm::vec3(0, 0, 0), glm::vec4(0.f, -1280.f, 720.f, 0.f), -1, 1);

FalconGame::FalconGame() {
}

FalconGame::~FalconGame() {

}

void FalconGame::init() {
	Game::init();
	Game::camera = cam;
	this->add(new Monkey(glm::vec3(0, 0, 0)));
	this->add(new Monkey(glm::vec3(1, 1, 0)));
	//this->add(new TestSprite(glm::vec2(0, 0)));
}

void FalconGame::render() {
	Game::render();
}

void FalconGame::update() {
	Game::update();
}
