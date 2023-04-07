#include<iostream>
#include<stdio.h>

using namespace std;

class Rectangle{
    
private:
    int length, breadth;
    float area;
    
public:
    Rectangle();
    void disp();
    float area_of_rectangle(int x, int y);
};

Rectangle::Rectangle(): length{0}, breadth{0}{
    
}

void Rectangle::disp(){
    cout<<"Length: "<<length<<endl;
    cout<<"Bradth: "<<breadth<<endl;
}
float Rectangle::area_of_rectangle(int x, int y){
    
    
    length = x;
    breadth = y;
    float area = length*breadth;
    return area;
}

int main(){
    
    Rectangle rect;
    rect.disp();
    float area = rect.area_of_rectangle(2,7);
    std::cout<<"Area is: "<<area<<endl;
    return 0;
}
