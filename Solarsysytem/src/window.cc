

#include "window.hh"


Window::Window(int width, int height, const  std::string& title) {
	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    window = glfwCreateWindow(width, height, title.c_str(), NULL, NULL);
	if (!window) {
		glfwTerminate();
		std::runtime_error("failed to create glfw window");
	}

	glfwMakeContextCurrent(window);
	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
		std::runtime_error("failed to initialize glad");
	}
}

GLFWwindow* Window::getWindow() {
	return window;
}
