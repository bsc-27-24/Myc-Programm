#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    // Default constructor
    Rectangle();

    // Overloaded constructor
    Rectangle(float l, float w);

    // Destructor
    ~Rectangle();

    // Setter methods
    void setLength(float l);
    void setWidth(float w);

    // Getter methods
    float getLength() const;
    float getWidth() const;

    // Function to calculate area
    float getArea() const;
};

// Default constructor
Rectangle::Rectangle() {
    length = 0;
    width = 0;
}

// Overloaded constructor
Rectangle::Rectangle(float l, float w) {
    length = l;
    width = w;
}

// Destructor
Rectangle::~Rectangle() {
    // Nothing to destroy
}

// Setter methods
void Rectangle::setLength(float l) {
    length = l;
}

void Rectangle::setWidth(float w) {
    width = w;
}

// Getter methods
float Rectangle::getLength() const {
    return length;
}

float Rectangle::getWidth() const {
    return width;
}

// Area calculation
float Rectangle::getArea() const {
    return length * width;
}

int main() {
    float length, width;

    // First object
    Rectangle rect1;

    cout << "Enter length and width for rectangle 1: ";
    cin >> length >> width;

    rect1.setLength(length);
    rect1.setWidth(width);

    cout << "Area of rectangle 1: " << rect1.getArea() << endl;

    // Second object
    cout << "\nEnter length and width for rectangle 2: ";
    cin >> length >> width;

    Rectangle rect2(length, width);

    cout << "Area of rectangle 2: " << rect2.getArea() << endl;

    return 0;
}