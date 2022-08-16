//File: main.cpp

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <physics-engine/glfw-wrapper.h>
#include <iostream> //for cout

int main (int argc, char** argv) 
{
    GLFWwindow* window = glfw_create(1024, 768, (char*)"engine"); 

    glfw_destroy();
    return 0;
}