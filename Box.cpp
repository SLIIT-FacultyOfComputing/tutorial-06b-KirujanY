#include "Box.h"

// Implement setters and getters
void Box::setLength(int nlength){
  length = nlength;
}

void Box::setWidth(int nwidth){
  width = nwidth;
}

void Box::setHeight(int nheight){
  height = nheight;
}

int Box::getLength(){
  return length;
}

int Box::getWidth(){
  return width;
}

int Box::getHeight(){
  return height;
}

// Implemenet the calcVolume() unction
int Box::calcVolume() {
  return length * width * height;
}
