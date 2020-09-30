//puzirek

//arr

////////////////////////////////////////////////////////////////////////////

#include <iostream>				//using cout/cin

#include<stdlib.h>				//using system("cls)

using namespace std;			//use cout/cin  (std::)

////////////////////////////////////////////////////////////////////////////



void Foo5(int *arr)
{
  for (int i = 0; i < 10; i++) {
    bool flag = true;
    for (int j = 0; j < 10 - (i + 1); j++) { 
       if (digitals[j] > digitals[j + 1]) {
        flag = false;
        swap (digitals[j], digitals[j + 1]);
      }
    }
    if (flag) {
      break;
    }
  }
cout << "Массив в отсортированном виде: ";
 
  for (int i = 0; i < 10; i++) {
    cout << digitals[i] << " "; // выводим элементы массива
  }

}


