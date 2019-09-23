#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
//    image.load("stars_mathilde.png");
    image.load("3stars_mathilde.png");
    image.rotate90(1);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    // from lewislepton OF tutorial vids https://forum.openframeworks.cc/t/openframeworks-tutorial-series/32886/5
    
    //color
//    ofSetColor(130, 255, 130, 60);
    ofSetColor(130);
//    ofSetBackgroundColor(100, 160, 200);
    ofBackground(100, 100, 160);

    // translate
    ofTranslate(0, 0);
    ofDrawCircle(128, 128, 64);
    ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);
    ofDrawCircle(400, 0, 64);
//    position of the Translate at 0, 0 will be different if it was already affect by the Translate above
//    ofTranslate(0, 0);
//    ofDrawCircle(128,128,64);
    
    // image
    ofTranslate(-ofGetWidth() / 2, -ofGetHeight() / 2);
    image.draw(ofGetWidth() / 2 - (image.getWidth() / 2), ofGetHeight() / 2 - (image.getHeight() / 2));
    // a little awk. bc it is not square
//    image.resize(200, 200);
    // spins like crazy
//    image.rotate90(1);

    // text
    ofSetColor(255);
    ofDrawBitmapString("very very small text", 300, 300);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
