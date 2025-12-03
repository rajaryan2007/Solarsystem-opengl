#include "renderer.hh"

Renderer::Renderer(GLFWwindow* win):window(win) {

}	

void Renderer::draw() {
	// Rendering code goes here
	while (!glfwWindowShouldClose(window)) {
		// Clear the screen
		glClearColor(0.1f, 0.0f, 0.1f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		glfwSwapBuffers(window);
		glfwPollEvents();
	}

}
