/*
 * Monkey.cpp
 *
 *  Created on: May 18, 2015
 *      @Author: Viktor Zoutman
 *		@Version: 1.0
 */

#include "Monkey.h"

#include <Falcon/Graphics/Mesh.h>
#include <Falcon/Graphics/Shader.h>
#include <Falcon/Graphics/Texture.h>
#include <glm/detail/type_vec.hpp>
#include <iostream>
#include <Falcon/Game.h>

float counter = 0.0f;

Monkey::Monkey(FF::Transform transform) : GameObject(transform) {
}

Monkey::~Monkey() {
}

void Monkey::init() {
	GameObject::init();

    FF::Vertex vertices[] = {
                    FF::Vertex(glm::vec3(-0.5, -0.5, 0), glm::vec2(0.0, 0.0), glm::vec3(0,0,0)),
                    FF::Vertex(glm::vec3(-0, 0.5, 0), glm::vec2(0.5, 1.0), glm::vec3(0,0,0)),
                    FF::Vertex(glm::vec3(0.5, -0.5, 0), glm::vec2(1.0, 0.0), glm::vec3(0,0,0)),
    };

    unsigned int indices[] = {0,1,2};

	add(new FF::Shader("res/basicTextureShader"));
	add(new FF::Texture("res/test.png"));
	//add(new FF::Mesh(vertices, sizeof(vertices)/sizeof(vertices[0]), indices, sizeof(indices)));
	add(new FF::Mesh("res/RandomObject.obj"));
}

void Monkey::render() {
	GameObject::render();
}

void Monkey::update() {
	GameObject::update();

	float sinCounter = sinf(counter);
	float cosCounter = cosf(counter);

	getTransform().getPos().x = sinCounter / 10;
	getTransform().getPos().z = cosCounter / 10;
	getTransform().getRot().x = counter / 10;
	getTransform().getRot().y = counter / 10;
	getTransform().getRot().z = counter / 10;
	//getTransform().getScale().x = 200;
	//getTransform().getScale().y = 200;
	//getTransform().getScale().z = 1;

	counter += 0.01f;
}

