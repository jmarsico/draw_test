//
//  ofBall.cpp
//  draw_test
//
//  Created by Jakob Marsico on 3/5/13.
//
//

#include "ofBall.h"


ofBall::ofBall(float _x, float _y, int _dim)
{

    x = _x;
    y = _y;
    dim = _dim;
    
    speedX = ofRandom(-1, 1);
    speedY = ofRandom(-1, 1);
    
   
    
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
   
    ofCircle(x, y, dim);
}
