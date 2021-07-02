#include <iostream>

/*
  Y^
   |
   |
   |
  -|--------->
             Y
*/

struct Ball {
  float x=0;
  float y=0;
  float vx=0;
  float vy=0;
  float ax=0;
  float ay=0;
  float m=0;

  Ball() {
  }
};

// Моделирование изменения положения шарика за время dt в секундах
void move(Ball* ball, float dt) {

}

// Напечатать на экран параметры полета шарика
void show(Ball ball) {

}

int main() {
  float t = 0;
  Ball a;
  float deltaT = 1.;           // Длительность такта моделирования

  // Задать начальные условия (положение, скорость, ускорение)
  // TODO

  for (int i=0; i<100; i++) {
     move(&a, deltaT);         // Сдвинуть шарик за один такт моделирования

     cout << t;
     show(a);

     t = t + deltaT;           // Увеличить счетчик времени
  }
}