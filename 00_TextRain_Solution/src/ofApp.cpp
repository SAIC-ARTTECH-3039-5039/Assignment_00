#include "ofApp.h"


void ofApp::setup()
{
    // Set up the camera.
    camera.setup(640, 480);

    // A snippet of The New Colossus by Emma Lazarus.
    std::string poem = "Give me your tired, your poor, Your huddled masses ...";
    
    // The initial character's x-position.
    std::size_t x = 0;
    
    // The amount of horizontal space we want between the letters.
    std::size_t xSpacing = 10;

    // Q. What does `for (auto c: poem)` mean?
    // Q. What is this special kind of for-loop called?
    // Q. What does the `auto` keyword mean?
    for (auto c: poem)
    {
        // Q. What does the `push_back` method do?
        // Q. What is the name of the Character's construction syntax used here?
        characters.push_back(Character { c, x, 14 });
        x += xSpacing;
    }
}

void ofApp::update()
{
    // Update the camera internals - check to see if there is a new frame, etc.
    camera.update();

    // We only want to take action if the frame is new.
    if (camera.isFrameNew())
    {
        // Pixel brightness ranges between 0 - 255, so a threshold of 80 is
        // just under half way. You can modify this value if you want.
        int brightnessThreshold = 80;

        // Q. Why are we using `auto&` here in the for-loop?
        // Q. Functionally how is `auto&` different from `auto`?
        for (auto& c: characters)
        {
            // Please translate the following psuedocode to C++.

            // 1. While the current character is positioned atop a camera pixel
            //    with a brightness less than `brightnessThreshold` AND the
            //    character position is not already at the top of the screen,
            //    move the character up one pixel.

            // 2. If the current character has a position greater than or equal
            //    to the height of the pixels, then reposition it back to the
            //    top, otherwise, move it down one pixel.
        }
    }
}

void ofApp::draw()
{
    // Draw the camera image anchored to the upper-left corner.
    camera.draw(0, 0);

    // Iterate through each of our poem characters and draw them at their
    // current location.
    for (auto c: characters)
    {
        // Q. Why are we using this syntax `std::string(1, c.c)` to construct
        // a `std::string`?
        ofDrawBitmapString(std::string(1, c.c), c.x, c.y);
    }
}
