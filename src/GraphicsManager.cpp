#include <physics-engine/GraphicsManager.h>

GraphicsManager::GraphicsManager(int width, int height, char* title) {
    window = glfw_create(width, height, title);
}

void GraphicsManager::destroy() {
    // destroy other stuff when needed
    glfw_destroy();
}