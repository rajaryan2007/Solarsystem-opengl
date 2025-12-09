#pragma once

#include <glfw/glfw3.h>
#include <iostream>
#include <string>


class Window {
public:
	Window(int width, int height, const std::string& title);	

	GLFWwindow* getWindow();

	
private:
	GLFWwindow* window;

};

