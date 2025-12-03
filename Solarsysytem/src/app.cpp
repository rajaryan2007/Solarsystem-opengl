#include <iostream>

#include "window.hh"
#include	"renderer.hh"
int main() {
	Window window(800, 600, "Solar System Simulation");
	Renderer renderer(window.getWindow());
	renderer.draw();
	return 0;
}