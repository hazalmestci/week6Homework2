//
//  Particle.hpp
//  week6Homework2
//
//  Created by Hazal Mestci on 3/6/17.
//
//

#ifndef Particle_hpp
#define Particle_hpp

#include <stdio.h>
#include "ofMain.h"

class Particle {
public:
    Particle ();
    
    void setup(float _x, float _y);
    void draw ();
    void move ();
    void update ();
    void display ();
    
    float x, y;
    float s; //size
    float a; //alpha
    float lifetime;
    float xDir;
    float yDir;
    float pos;
    float vel;
    float randomStep;
    float acc; //acceleration
    
    
};


#endif /* Particle_hpp */
