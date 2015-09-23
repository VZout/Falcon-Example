/*
 * Main.cpp
 *
 *  Created on: May 29, 2015
 *      Author: bideb
 */

#include <iostream>

#define GLEW_STATIC
#include "FalconGame.h"

int main() {
	FalconGame f;
	f.start(720, 720, "Falcon Example Game Version 1.0");
	return 0;
}
