#include "testApp.h"

int conetop = 0;


//--------------------------------------------------------------
void testApp::setup(){
    ofEnableSmoothing();
    ofEnableAlphaBlending();
    ofBackground(0);
    ofBackgroundGradient(ofColor::black, ofColor::aquamarine, OF_GRADIENT_CIRCULAR);

}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    
    //center circle
    ofSetColor(0, 0, 255);
    ofFill();
    ofCircle(ofGetWindowWidth()/2, ofGetWindowHeight()/2, 100);
    
    //curve
    ofNoFill();
    ofSetColor(ofColor::aquamarine);
    ofCurve(10, 100, 30, 10, 700, 700, 200, 430);
   

    //outlined cone

    ofFill();
    ofSetColor(ofColor::coral);
    ofCone(300, 600, 10, 60, 100);
    ofNoFill();
    ofSetColor(ofColor::burlyWood);
    ofCone(300, 600, 10, 60, 100);
    
    
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