#include <GLFW/glfw3.h>

typedef GLFWwindow Window;

Window* glfw_create(int width, int height, char* title);
void glfw_destroy();