#pragma once
#include <glfw/glfw3.h>

class Renderer {
public:
	Renderer(GLFWwindow* window);
	void draw();
private:
	GLFWwindow* window;
};
