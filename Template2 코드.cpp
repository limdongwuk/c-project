#include<iostream>

template<typename T>
class Shape 
{
public:
    virtual void draw()const = 0; //순수 가상함수
    virtual T area()const = 0; //순수 가상함수
    
};
template <typename T>
class Circle : public Shape<T>
{
private:
    T radius;
public:
    Circle(T r) :radius(r) {}
    void draw()const override
    {
        std::cout << "원의 반지름 : " << radius << std::endl;
    }
    T area()const override 
    {
        return 3.14 * radius * radius;
    }
};
template <typename T>
class Rectangle : public Shape<T>
{
private:
    T width;
    T height;
public:
    Rectangle(T w, T h) : width(w), height(h) {}

    void draw()const override
    {
        std::cout << "가로 : " << width << "세로 : " << height << std::endl;
    }
    T area()const override
    {
        return width * height;
    }
};


//함수 템플릿 : Shape포인터를 인자로 받아서 draw와 area를 출력하고 싶으면
template<typename T>
void Show(const Shape<T>* shape)
{
    shape->draw();
    std::cout << "면적" << shape->area() << std::endl;
}

void main()
{
    Circle <double> circle(3.14);
    Rectangle<int> rectangle(4, 3);
    Show(&circle);
    Show(&rectangle);
}