#include <physics-engine/glfw-wrapper.h>
#include <vector>


#ifndef GraphicsManager_H
#define GraphicsManager_H

class GraphicsManager {
    public:
        GraphicsManager(int width, int height, char* title);
        void add_triangle();
        void render_objects();
        void destroy();
    private:
        Window* window;
        std::vector<unsigned int> VAOs;
        std::vector<unsigned int> VBOs;
};

#endif