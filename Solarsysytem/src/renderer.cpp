#include "renderer.hh"
#include "shader.hh"

#include "window.hh"

Renderer::Renderer(GLFWwindow* win):window(win) {
}	

void Renderer::draw() {
    float triangleVer[] = {
     0.0f,  0.5f, 0.0f,  
     0.5f, -0.5f, 0.0f,  
    -0.5f, -0.5f, 0.0f   
    };

    unsigned int planeVAO, planeVBO;
    glGenVertexArrays(1, &planeVAO);
    glGenBuffers(1, &planeVBO);

    glBindVertexArray(planeVAO);
    glBindBuffer(GL_ARRAY_BUFFER, planeVBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(triangleVer), triangleVer, GL_STATIC_DRAW);

    glEnableVertexAttribArray(0);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
    glBindVertexArray(0);

    Shader shader("assests/shader/simple.vert", "assests/shader/simple.frag");

    while (!glfwWindowShouldClose(window)) {
        glClearColor(0.1f, 0.0f, 0.1f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        shader.use();
        glBindVertexArray(planeVAO);
        glDrawArrays(GL_TRIANGLES, 0, 3);

        glfwSwapBuffers(window);
        glfwPollEvents();
    }
}