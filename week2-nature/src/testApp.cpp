#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofEnableAlphaBlending();
    ofSetCircleResolution(100);
    ofSetVerticalSync(true);
    ofEnableSmoothing();
    
}

//--------------------------------------------------------------
void testApp::update(){
    
}

//--------------------------------------------------------------
void testApp::draw(){
    ofBackground(0);

    ofPushMatrix();
    ofTranslate(ofGetWidth()*0.5, ofGetHeight()*0.5);

    //  Using translation and rotate
    //
    for(int i = 0; i < 1000; i++ ){
        ofRotate(GOLDEN_RATIO*360, 0, 0, 1.0);
        ofTranslate(i, i);
        ofCircle(0, 0, i*0.01);
    }
    
    ofPopMatrix();
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

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