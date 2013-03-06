//
//  ball.h
//  draw_test
//
//  Created by Jakob Marsico on 3/4/13.
//
//

#ifndef draw_test_ball_h
#define draw_test_ball_h

#include "ofMain.h"
 
class Ball {
public:
    
    //constructor
    Ball();
    
    
    //methods
    void moveTo();
    void draw();
    
    //properties
    int x;
    int y;
    ofColor color;
    
    

};



#endif
