#include <iostream>
using namespace std;

const int width = 20;
const int height = 20;

int x, y, fruitX, fruitY, score;
enum direction { STOP = 0, LEFT, RIGHT, UP, DOWN};
direction dir;
bool Gameover;
 

void Setup(){
    Gameover = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;
}
void Display();

int main(){
    Setup();
    Display();
    return 0;
}