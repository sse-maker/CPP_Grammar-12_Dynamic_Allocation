//
//  main.cpp
//  12_Dynamic_Allocation
//
//  Created by 세광 on 2021/06/19.
//

#include <iostream>

using namespace std;

void Dynamic_Allocation_Int();
void Dynamic_Allocation_Arr();

class Dynamic_Allocation_Class {
public:
    Dynamic_Allocation_Class();
    Dynamic_Allocation_Class(const float x, const float y);
    ~Dynamic_Allocation_Class();
    
    float GetX() const;
    float GetY() const;
    
private:
    float x, y;
};

int main() {
    Dynamic_Allocation_Int();
    Dynamic_Allocation_Arr();
    
    Dynamic_Allocation_Class s1 = Dynamic_Allocation_Class();
    Dynamic_Allocation_Class s2 = Dynamic_Allocation_Class(3, 2);
    
    Dynamic_Allocation_Class *d1 = new Dynamic_Allocation_Class();
    Dynamic_Allocation_Class *d2 = new Dynamic_Allocation_Class(3, 2);
    
    cout << "(" << d1->GetX() << ", " << d1->GetY() << ")" << endl;
    cout << "(" << d2->GetX() << ", " << d2->GetY() << ")" << endl;
}

void Dynamic_Allocation_Int() {
    int *a = new int(5);
    cout << a << endl;
    cout << *a << endl;
    *a = 10;
    cout << a << endl;
    cout << *a << endl;
}

void Dynamic_Allocation_Arr() {
    int *arr, len;
    cout << "동적 할당할 배열의 길이 입력: ";
    cin >> len;
    arr = new int[len];
    for(int i = 0; i < len; i++) {
        arr[i] = len - i;
    }
    for(int i = 0; i < len; i++) {
        cout << arr[i] << endl;
    }
    delete[] arr;
}

Dynamic_Allocation_Class::Dynamic_Allocation_Class() : x(0), y(0) {
    cout << this << ": Dynamic_Allocation_Class()" << endl;
}
Dynamic_Allocation_Class::Dynamic_Allocation_Class(const float x, const float y) : x(x), y(y) {
    cout << this << ": Dynamic_Allocation_Class(const float x, const float y)" << endl;
}
Dynamic_Allocation_Class::~Dynamic_Allocation_Class() {
    cout << this << ": ~Dynamic_Allocation_Class()" << endl;
}

float Dynamic_Allocation_Class::GetX() const { return x; }
float Dynamic_Allocation_Class::GetY() const { return y; }
