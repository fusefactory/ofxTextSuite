#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	auto size = 20;
	this->textBlock.init(ofToDataPath("Lato-Regular.ttf"), size);

	//add a specific tag and associate it to another font, size, and color
	bold.tagOpened = "<b>";
	bold.tagClosed = "<\/b>";
	bold.font = ofToDataPath("Lato-Bold.ttf");
	bold.size = size;
	bold.color = ofColor(255, 255, 255);
	bold.antiAliesed = true;

	//add another tag
	italic.tagOpened = "<i>";
	italic.tagClosed = "<\/i>";
	italic.font = ofToDataPath("Lato-Italic.ttf");
	italic.size = size;
	italic.color = ofColor(255, 255, 255);
	italic.antiAliesed = true;

	// associate the format to the text block
	this->textBlock.setFormat(bold);
	this->textBlock.setFormat(italic);

	//use <br> to force a line break
	textBlock.setHtmlText("This text is regular. Then it <b>gets bold</b>.<br>Now we are on a new line, <i>but in italic</i>. <br><br>We skipped two lines, but <b>bold never gets old</b>.");

	//Initially wrap the text to the screen width. Important! otherwise break lines won't work
	textBlock.wrapTextX(ofGetWidth());

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	this->textBlock.draw(0, 0);
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
