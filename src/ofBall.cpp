//
//  ofBall.cpp
//  draw_test
//
//  Created by Jakob Marsico on 3/5/13.
//
//

#include "ofBall.h"


ofBall::ofBall()
{
    x = ofRandom(0, ofGetWidth());
    y = ofRandom(0, ofGetHeight());
    
    speedX = ofRandom(-1, 1);
    speedY = ofRandom(-1, 1);
    
    dim = 20;
    
}

void ofBall::update(){
    if ( x < 0){
        x = 0;
        speedX *= -1;
    } else if(x > ofGetWidth()){
        x = ofGetWidth();
        speedX *= -1;
    }
    
    
    if ( y < 0){
        y = 0;
        speedY *= -1;
    } else if(y > ofGetHeight()){
        y = ofGetHeight();
        speedY *= -1;
    }
    
    y+=speedY;
    x+=speedX;
    
}

void ofBall::draw(){
    ofSetColor(20, 20, 20);
    ofCircle(x, y, dim);
}
