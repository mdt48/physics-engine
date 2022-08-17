#include <physics-engine/GraphicsManager.hpp>

void framebuffer_size_callback(Window* window, int width, int height) {
    glViewport(0, 0, width, height);
}

GraphicsManager::GraphicsManager(int width, int height, char* title) {
    window = glfw_create(width, height, title);
    if (!gladLoadGL())
    {
        fprintf(stdout, "Failed to initialize GLAD");
    }
    glViewport(0, 0, width, height);
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);
}

void GraphicsManager::destroy() {
    // destroy other stuff when needed
    glfw_destroy();
}

void GraphicsManager::render() {
    while(!glfwWindowShouldClose(window))
    {
        handle_input();
        glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);
        glfwPollEvents();
        glfwSwapBuffers(window);
    }
}

void GraphicsManager::handle_input() {
    // more controls later
    if(glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window, true);
}


