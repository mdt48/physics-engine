#include <physics-engine/GraphicsManager.h>
#include <iostream> //for cout

int main (int argc, char** argv) 
{
    GraphicsManager graphics(1024, 768, (char*)"engine");

    graphics.destroy();

    return 0;
}