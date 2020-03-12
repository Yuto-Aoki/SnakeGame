#include <iostream>
#include <time.h>
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
void Display(){
    system("cls");
    for (int i = 0; i < width + 2; i++) cout << '#';
    cout << endl;
    for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            if (j == 0) cout << '#';
            if (i == y && j == x) cout <<'O';
            else if (i == fruitY && j == fruitX) cout << '@';
            else cout << ' ';
            if (j == width - 1) cout << '#';
        }
        cout << endl;
    }
    for (int i = 0; i < width + 2; i++) cout << '#';
}

int main(){
    Setup();
    while (!Gameover){
        Display();
    }
    return 0;
}