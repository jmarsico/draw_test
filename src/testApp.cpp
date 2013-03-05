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
    
    //initial position of the ball
    xPos = ofGetWindowWidth() * 0.5;
    yPos = ofGetWindowHeight() * 0.5;

}

//--------------------------------------------------------------
void testApp::update(){
    
    xPos += ( mouseX - yPos )*0.1;
    yPos += ( mouseY - yPos )*0.1;
    
    if( xPos > ofGetWindowWidth()){
        xPos = ofGetWindowWidth();
    }
    
    if( xPos < 0 ){
        xPos = 0;
    }
    
    if( yPos > ofGetWindowHeight()){
        yPos = ofGetWindowHeight();
    }
    
    if( yPos < 0 ){
        yPos = 0;
    }
    
 
    zPos++;
    coneRadius++;
    coneHeight++;
   

}

//--------------------------------------------------------------
void testApp::draw(){
    
    //center circle
    ofBackgroundGradient(ofColor::grey,ofColor(30,10,10), OF_GRADIENT_CIRCULAR);
    ofSetColor(0, 0, 255);
    ofFill();
    ofCircle(xPos, yPos, 30);
    
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
    xPos = ofRandom( ofGetWindowWidth() - 10);
    yPos = ofRandom( ofGetWindowHeight() - 10);
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