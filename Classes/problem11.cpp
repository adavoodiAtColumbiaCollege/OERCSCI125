
/*
Note: This file is generated as part of the OER package for CSCI125.
Note: This project has been financially supported by Columbia College

Note: Date: Summer 2023
*/



#include <iostream>
#include <string>
using namespace std;

class Camera {
    string brand;
    int resolution;
public:
    Camera(string b, int r) : brand(b), resolution(r) {}
    void display() { cout << "Camera: " << brand << ", Resolution: " << resolution << "MP" << endl; }
};

int main() {
    Camera myCamera("Canon", 20);
    myCamera.display();
    return 0;
}
