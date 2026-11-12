#include <iostream>

using namespace std;

void whileLoop(){
   int i{};
   int j{};
   while(i + j <100){
      i= i+j;
      cout << i << ' ';
      ++j;
   } 
}

void doWhileLoop(){
   int i{};
   int j{};
   do{
      i = i+j;
      cout << i << ' ';
      ++j;
   }while(i + j<100);
}

void forLoop(){
   int i{};
   for(int j{}; i + j < 100; ++j){
      i= i+j;
      cout << i << ' ';
   }
}

int main(){
   whileLoop();
   cout << endl;
   doWhileLoop();
   cout << endl;
   forLoop();
   cout << endl;
}
