#pragma once
#include "../glad/include/glad/glad.h"
#include <GLFW/glfw3.h>
class Renderer {
public:
	Renderer(GLFWwindow* window);
	void draw();
private:
	GLFWwindow* window;
};
