#include "testApp.h"

int conetop = 0;


//--------------------------------------------------------------
void testApp::setup(){
   
    //smoothing and alpha blending
    ofEnableSmoothing();
    ofEnableAlphaBlending();
    ofBackground(0);
    
    //set framerate
    ofSetFrameRate(30);
    
    nBalls = 5; //number of balls to create

    myBall = new ofBall*[nBalls];
    
    for (int i = 0; i < nBalls; i++) {
        float x = 20+(100*i);
        float y = 20+(100*i);
        int dim = 10+(10*i);
        
        myBall[i] = new ofBall(x,y,dim);
    }
    
    


}

//--------------------------------------------------------------
void testApp::update(){
    theBall.x += (mouseX - theBall.x)*0.1;
    theBall.y += (mouseY - theBall.y)*0.1;
 
    zPos++;
    coneRadius++;
    coneHeight++;
    
    for (int i = 0; i < nBalls; i++) {
        myBall[i]->update();
    }
    


}

//--------------------------------------------------------------
void testApp::draw(){
    
    //center circle
    ofBackgroundGradient(ofColor::grey,ofColor(30,10,10), OF_GRADIENT_CIRCULAR);
    theBall.draw();
    
    //curve
    ofNoFill();
    ofSetColor(ofColor::aquamarine);
    ofCurve(10, 100, 30, 10, 700, 700, 200, 430);
   

    //outlined cone
    
    
    ofFill();
    ofSetColor(ofColor::coral);
    ofCone(300, 600, zPos, coneRadius, coneHeight);
    ofNoFill();
    ofSetColor(ofColor::burlyWood);
    ofCone(300, 600, zPos, coneRadius, coneHeight);
     
  
    
    //triangle
    ofFill();
    ofSetColor(200, 30, 30, 100);    
    ofTriangle(ofGetWindowWidth()*0.5, 10, 10, ofGetWindowHeight() - 50, ofGetWindowWidth() - 50, ofGetWindowHeight() - 50);
    
    //box
    ofNoFill();
    ofSetColor(ofColor::ghostWhite);
    ofBox(ofGetWindowWidth()*0.66,ofGetWindowHeight()*0.66,-10,40);
    
    for (int i = 0; i < nBalls; i++) {
        myBall[i]->draw();
    }
  
 
    

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

    zPos = 0;
    coneRadius = 0;
    coneHeight = 0;
    


}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}