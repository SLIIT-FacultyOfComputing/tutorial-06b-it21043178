#include "Box.h"

// Implement setters and getters
void box::setlength(int nlength){
  length = nlength;
}

void box::setwidth(int nwidth){
  width = nwidth;
}

void box::setheight(int nheight){
  height = nheight;
}

int box::getlength(){
  return length;
}

int box::getwidth(){
  return width;
}

int box::getheight(){
  return height;
}
// Implemenet the calcVolume() unction
int Box::calcVolume() {
  return length * width * height;
}
