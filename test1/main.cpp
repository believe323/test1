#include <iostream>
using namespace std;

//模板
template<typename T>
void change(T& t1,T& t2){
    T tem = t1;
    t1 = t2;
    t2 = tem;
}

int main(){
    int a = 20;
    int b = 3;
    change(a,b);
    cout<<a<<" "<<b<<endl;
    char c = 'a';
    char d = 'b';
    change(c,d);
    //1.自动类型推导
    //2.显示指定类型

    return 0;
}