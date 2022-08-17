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

void GraphicsManager::render_objects() {
    while(!glfwWindowShouldClose(window))
    // while (1)
    {
        // input
        // processInput(window);
        // rendering commands here
        // ...
        // check and call events and swap the buffers
        glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);
        glfwPollEvents();
        glfwSwapBuffers(window);
    }
}