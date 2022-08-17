#include <physics-engine/GraphicsManager.hpp>

int main (int argc, char** argv) 
{
    GraphicsManager graphics(1024, 768, (char*)"engine");
    graphics.render();
    graphics.destroy();

    return 0;
}