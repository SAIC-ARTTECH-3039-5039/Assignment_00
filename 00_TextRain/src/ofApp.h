//
// This is a cover of:
//
// Text Rain (1999)
// by Romy Achituv & Camille Utterback
//
// [Project](http://camilleutterback.com/projects/text-rain/)
// [Video](https://www.youtube.com/watch?v=f_u3sSffS78)
//


#pragma once


#include "ofMain.h"


// Instructions
//
// Wherever you see a question (Q. What is ...), please follow it by your
// answer A.  e.g.
//
// Q. What color is the sky? <- (my question)
// A. The sky is the green. <- (your answer)


// Q. What is a `struct`?
// Q. How is it different from a `class`?
struct Character
{
    // Q. Why might we use a char here?
    char c;

    // Q. What is `std::size_t`?
    // Q. Why might I have chosen to use `std::size_t` here?
    std::size_t x;
    std::size_t y;
};


class ofApp: public ofBaseApp
{
public:
    void setup();
    void update();
    void draw();

    ofVideoGrabber camera;

    // Q. What is a `std::vector`?
    std::vector<Character> characters;

};

