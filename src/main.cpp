#include <physics-engine/GraphicsManager.hpp>
#include <iostream> //for cout

int main (int argc, char** argv) 
{
    GraphicsManager graphics(1024, 768, (char*)"engine");
    graphics.render_objects();
    graphics.destroy();

    return 0;
}