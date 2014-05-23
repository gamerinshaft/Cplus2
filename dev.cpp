#include <iostream>
using namespace std;

int main(){
  int i,j,max;
  int value = 0; //valueを初期化
  int a[] = {9,8,10,3,7,2};
  int limit = sizeof(a)/sizeof(a[0]);  //配列全体のメモリ÷一つあたりのメモリ＝１つあたりの要素数
  int tmp[limit];  //sizeof~の要素数と一緒

  for(i=0;i<limit;i++){
    tmp[i] = a[i];  //tmp[i]にa[i]を代入
        cout << "a[" << i << "] =" << a[i] << '\n';//もとの配列の表示
  }
  cout << "大きい順に並べ替えたもの" << '\n';
  for(i=0;i<limit;i++){              //比較する１つ目を固定
      for(j=0;j<limit;j++){          //比較対象をfor文で回す
    if(value <= tmp[j]){      //valueよりtmp[j]が大きければ・・・
        value = tmp[j];        //tmp[j]をvalueへ代入
              max = j; //valueへ代入したときのjをmaxとして記憶、つまり一番大きいtmp[j]を記憶
      }
    }
    value = 0;      //valueを初期化
          a[i] = tmp[max];  //a[i]に値の最大数を代入
      if(i != limit-1){        //？？？
          tmp[max] = 0;//初期化
    }
    cout << "a[ " << i << " ] =" << a[i] <<'\n';  //出力
  }
  return 0;
}
// }
