#include <iostream>
#include <cmath>

void print_pyramid(int*,int);
void print_elem(int*,int);

int main() {
  int aa[3][10] = {
  {1,3,6,5,9,8},
{94,67,18,44,55,12,6,42},
  {16,11,9,10,5,6,8,1,2,4},

};
  int asizes[] = {6,8,10};
  int numarr = 3;
  for(int i{};i<numarr;i++){
    print_pyramid(aa[i],asizes[i]);
  }
  return 0;
}

void print_pyramid(int* arr, int size){
   std::cout<<"Исходный массив: ";
   for(int i{};i<size;i++){
     std::cout<<arr[i]<<" ";
   }
   std::cout<<"\nПирамида:\n";
   for(int i{};i<size;i++){
     print_elem(arr,i);
   }
   std::cout<<"\n";
}

void print_elem(int* arr, int i){
   std::cout<<(int)(log2(i+1));
    if(i==0){
      std::cout<<" root ";
    }else{
      if(i%2==0){
         std::cout<<" right";
      }else{
         std::cout<<" left";
      }
      std::cout<<"("<<arr[(i-1)/2]<<") ";
    }
    std::cout<<arr[i]<<std::endl;
}
