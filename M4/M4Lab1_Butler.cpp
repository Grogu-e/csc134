#include <iostream>
using namespace std;
/* 
CSC 134
M4lab1-ASCII boxes
butlera
10/16/23
  */
//The program will do the following:
// Ask the user to draw a block of asterisks
//program will use functions and loops
//promt: draw a line of '*' width variable wide
//promt: draw a box of '*' width wide by height tall




void drawLine(int width) {
  for(int i = 0; i < width; i++) {
    cout << "*";
  }
  cout << "\n";
}


void drawBox(int width, int height) {
  for(int i = 0; i < height; i++) {
    drawLine(width);
  }
}

void drawSmiley(int width, int height) {
  if(height < 3 || width < 5) {
    cout << "The dimensions are too small for a smiley.\n";
    return;
  }

  for(int i = 0; i < height; i++) {
    for(int j = 0; j < width; j++) {
      if(i == 0 || i == height - 1 || j == 0 || j == width - 1) {
        cout << "*";
      } else if(i == 1 && (j == 1 || j == width-2)) {
        cout << ".";
      } else if(i == height-2 && j > 0 && j < width-1) {
        cout << "_";
      } else {
        cout << " ";
      }
    }
    cout << "\n";
  }
}

int main() {
  int width, height;

  cout << "Enter the width of the smiley box: ";
  cin >> width;
  cout << "Enter the height of the smiley box: ";
  cin >> height;
  drawSmiley(width, height);

  



  cout << "Enter the width of the box: ";
  cin >> width;
  cout << "Enter the height of the box: ";
  cin >> height;
  drawBox(width, height);


  return 0;
}





