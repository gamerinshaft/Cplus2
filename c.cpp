#include <iostream>
using namespace std;

int main(){
  int i,j,max;
  int value = 0;
  int a[] = {9,8,10,3,7,2};
  int limit = sizeof(a)/sizeof(a[0]);
  int tmp[limit];

  for(i=0;i<limit;i++){
    tmp[i] = a[i];
    cout << "a[" << i << "] =" << a[i] << "\n";
  }
  cout << "大きい順にならびかえたもの↓\n";
  for(i=0;i<limit;i++){
    for(j=0;j<limit;j++){
      if(value <= tmp[j]){
        value = tmp[j];
        max = j;
      }
    }
    value = 0;
    a[i] = tmp[max];
    if(i != limit-1){
      tmp[max] = 0;
    }
    cout << "a[" << i << "] =" << a[i] << "\n";
  }
  return 0;
}
