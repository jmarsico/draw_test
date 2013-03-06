//
//  ball.cpp
//  draw_test
//
//  Created by Jakob Marsico on 3/4/13.
//
//

#include "ball.h"

Ball::Ball(){
    //set the initial color
    color.set(ofRandom(255), ofRandom(255), ofRandom(255));
    
    //initial x position of the ball
    x = ofRandom( ofGetWindowWidth() );
    
    //initial y position of the ball
    y = ofRandom( ofGetWindowHeight() );
    
}

void Ball::moveTo(){
    
}

void Ball::draw(){
    ofSetColor(color);
    ofFill();
    ofCircle( x, y, 30);
}