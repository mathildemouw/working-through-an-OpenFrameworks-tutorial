#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    image.load("3stars_mathilde.png");
    image.rotate90(1);

    font.load("castaway.ttf", 32);
    text = "HI I AM MATHILDE";

    // audio
    // I couldn't use the m4a I originally tried
    micro_elf.load("2018-05-05_UM2_Test_Microscopic_Elf.wav");
    micro_elf.setVolume(0.6);
    // if I start on speakers,it does not detect and switch to headphones;
    micro_elf.play();
    micro_elf.setLoop(true);
    // half speed
    micro_elf.setSpeed(0.5);
    // pan completely to the right
    micro_elf.setPan(1.0);
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

    // font (or is it typeface?)
    font.drawString(text, ofGetWidth() / 2 - (font.stringWidth(text) / 2), ofGetHeight() / 3);
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
