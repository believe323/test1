#include <iostream>
#include <cstring>
using namespace std;


//实现排序功能
template<typename T,typename A>
void sort(T* arr,A size){
    int i,j;
    i=j=0;
    for(i=0;i<size-1;i++){
        for(j=0;j<size-i;j++){
            if(arr[j]<arr[j+1]){
                T tem = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tem;
            }
        }
    }
}

void test01(){
    char ch[] = "abcdefg";
    sort(ch,strlen(ch));
    cout<<ch<<endl;
}

//类模板
template<class T1,class T2>
class Person{
    public:
        Person(T1 age,T2 name){
            m_age = age;
            m_name = name;
        }

        void getmem(){
            cout<<m_age<<"  "<<m_name<<endl;
        }

        T1 m_age;
        T2 m_name;
    };

//关于类模板成员函数创建的时机

//类模板作为函数参数的三种方法
//1.显示具体参数类型
void test02(Person<int,string>& p){
    p.getmem();
}
//2.参数模板化
template<class T1,class T2>
void test03(Person<T1,T2>&p){
    p.getmem();
}

template<class T>
void test04(T& p){
    cout<<typeid(T).name()<<endl;
    p.getmem();
}

int main(){
    Person<int,string>p(12,"小张");
    test02(p);
    test03(p);
    test04(p);
    return 0;
}