//
//  ofBall.h
//  draw_test
//
//  Created by Jakob Marsico on 3/5/13.
//
//

#ifndef draw_test_ofBall_h
#define draw_test_ofBall_h


#include "ofMain.h"

class ofBall {
public:
    
    //methods
    void update();
    void draw();
    
    
    //constructor
    ofBall();

    //variables
    float x;
    float y;
    int dim;
    float speedX;
    float speedY;

private:


};


#endif
