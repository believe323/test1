#include <iostream>
using namespace std;

/*
class Teacher{
public:
    Teacher(int age,char* name){
        m_name = name;
        m_age = age;
    }

    //void operator<<(ostream& cout,Teacher t);

public:
    int m_age;
    string m_name;
};

void operator<<(std::ostream &cout, Teacher t) {
    cout<<t.m_age<<" "<<t.m_name<<endl;
}

Teacher& operator++(Teacher& t){
    t.m_age++;
    return t;
}

Teacher& operator++(Teacher& t,int){
    Teacher& tem = t;
    t.m_age++;
    return tem;
}


int main01(){

    Teacher t1(12,"小张");
    Teacher t2(24,"小兰");
    cout<<t1;
    ++t1;
    cout<<t1;
    cout<<t1++;
    cout<<t1;
}
*/

//继承中的同名函数的处理
class base {
public:
    base(int a) {
        m_a = a;
    }
    int m_a;
};

class son :public base {
public:

    son() : base(10) {
        m_a = 20;
    }
    int m_a;
};

int mian() {
    son s;
    cout << s.m_a << s.base::m_a;
    return 0;
}













