//
//  Particle.cpp
//  week6Homework2
//
//  Created by Hazal Mestci on 3/6/17.
//
//

#include "Particle.hpp"

Particle::Particle () {
    
    
    
}

void Particle::setup (float _x, float _y) {
    x= _x;
    y= _y;
    //        s= ofRandom(50, 70);
    a= 30;
    lifetime = 150;
    //you can multiply it to make it more random
    xDir= ofNoise(cos(ofGetElapsedTimef())+1, 1);
    yDir= ofRandom( 1, 2);

}

void Particle::draw() {
    //    ofPushMatrix();
    
    
    ofSetColor(0, 0, 0, ofRandom(100,255));
    
    ofDrawCircle(x, y, s);
    
    //    ofPopMatrix();
    
    ofSetColor(255, 0, 0, a/10);
    ofDrawCircle(ofGetWindowWidth()/2, ofGetWindowHeight()/2, 30);
    //
    
    
    
}

void Particle::move () {
    
    
}

void Particle::update() {
    lifetime--;
    pos = pos.add(vel);
    vel = vel.add(acc);
    
    s = map(a, 200, 0, 3, 10);
    
    if (a > 0) {
        a-=0.3;}
    
    
    //count down the life
    lifetime --;
    //smoke rises, move up
    y-= yDir*2;
    x+= xDir*2;
    //reduce alpha
    if (a >0) {
        a-=0.5;
    }
    //increase or decrease the size
    s=ofMap(a,30,0,-30,150);
    //  s = 30;
    
    
}

void Particle:display() {
    //#42B4EA
    fill(255, a);
    ellipse(pos.x,pos.y,s,s);
    ellipse(pos.x+randomStep,pos.y,s,s);
    //  ellipse(pos.x+randomStep+10,pos.y-100,s, s);
    
}


    Particle(float x, float y, float _randomStep) {
        pos = new PVector(x, y);
        vel = new PVector(0, random(0.8,1.3));
        acc = new PVector(0,0.001);
        s =random(3,10);
        randomStep = _randomStep;
        lifetime =800;
        y=random(0,600);
        //have random step parameter
        
        //   yVel = random(1,2);
    }
    

    }    
}
