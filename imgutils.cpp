#include <iostream>

struct Image {
  int mx;
  int my;
  int* points;  //картинка размером mx * my
};



// Создание изображения
void createImage(Image* img,int tmx, int tmy) {
  // Выделить память  размером tmx * tmy 

}


// Отображения изображения на экран в pnm формате
//  0 0 0 0 1 0
//  0 0 0 0 1 0
//  0 0 0 0 1 0
//  0 0 0 0 1 0
//  0 0 0 0 1 0
//  0 0 0 0 1 0
//  1 0 0 0 1 0
//  0 1 1 1 0 0
//  0 0 0 0 0 0
//  0 0 0 0 0 0


void showImage(Image* img) {
  // Вывести картинку на экран при помощи cout или 

}


// Изменения точки на изображения
//  Необходимо изменить в массиве points - точку с координатами mx*y+x в цвето color
//  0 0 0 0 1 0  0 0 0 0 1 0  0 0 0 0 1 0  0 0 0 0 1 0  0 0 0 0 1 0  0 0 0 0 1 0  1 0 0 0 1 0  0 1 1 1 0 0  0 0 0 0 0 0  0 0 0 0 0 0
   

void setPointImage(Image* img,int x, int y,int color) {

}


// Получение точки на изображение
int getPointImage(Image* img,int x, int y) {

  return 0;
}


// Отображения изображения на экран в pnm формате - P1
// https://en.wikipedia.org/wiki/Netpbm#File_formats
//
//  P1
//  6 10
//  0 0 0 0 1 0
//  0 0 0 0 1 0
//  0 0 0 0 1 0
//  0 0 0 0 1 0
//  0 0 0 0 1 0
//  0 0 0 0 1 0
//  1 0 0 0 1 0
//  0 1 1 1 0 0
//  0 0 0 0 0 0
//  0 0 0 0 0 0
//  Файл можно открыть в gimp

void saveToPnmFile(Image* img, string fileName) {


}

int main() {
  return 0;
}
