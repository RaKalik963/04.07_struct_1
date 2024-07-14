#include <iostream>
#include <string>
#include <cstdlib> // для system("pause")

using namespace std;

const int MAX_CARS = 100;

struct Car {
    double length;
    double clearance;
    double engineVolume;
    double enginePower;
    double wheelDiameter;
    string color;
    string transmissionType;
};

int carCount = 0;
Car garage[MAX_CARS];

void addCar(const Car& car) {
    if (carCount < MAX_CARS) {
        garage[carCount++] = car;
    }
    else {
        cout << "Garage is full, cannot add more cars." << endl;
    }
}

void showCars() {
    for (int i = 0; i < carCount; ++i) {
        cout << "Length: " << garage[i].length << " meters" << endl;
        cout << "Clearance: " << garage[i].clearance << " meters" << endl;
        cout << "Engine Volume: " << garage[i].engineVolume << " liters" << endl;
        cout << "Engine Power: " << garage[i].enginePower << " horsepower" << endl;
        cout << "Wheel Diameter: " << garage[i].wheelDiameter << " inches" << endl;
        cout << "Color: " << garage[i].color << endl;
        cout << "Transmission Type: " << garage[i].transmissionType << endl;
        cout << "------------------------" << endl;
    }
}

void searchByColor(const string& color) {
    bool found = false;
    for (int i = 0; i < carCount; ++i) {
        if (garage[i].color == color) {
            cout << "Length: " << garage[i].length << " meters" << endl;
            cout << "Clearance: " << garage[i].clearance << " meters" << endl;
            cout << "Engine Volume: " << garage[i].engineVolume << " liters" << endl;
            cout << "Engine Power: " << garage[i].enginePower << " horsepower" << endl;
            cout << "Wheel Diameter: " << garage[i].wheelDiameter << " inches" << endl;
            cout << "Color: " << garage[i].color << endl;
            cout << "Transmission Type: " << garage[i].transmissionType << endl;
            cout << "------------------------" << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "Car with this color not found." << endl;
    }
}

void searchByTransmission(const string& transmissionType) {
    bool found = false;
    for (int i = 0; i < carCount; ++i) {
        if (garage[i].transmissionType == transmissionType) {
            cout << "Length: " << garage[i].length << " meters" << endl;
            cout << "Clearance: " << garage[i].clearance << " meters" << endl;
            cout << "Engine Volume: " << garage[i].engineVolume << " liters" << endl;
            cout << "Engine Power: " << garage[i].enginePower << " horsepower" << endl;
            cout << "Wheel Diameter: " << garage[i].wheelDiameter << " inches" << endl;
            cout << "Color: " << garage[i].color << endl;
            cout << "Transmission Type: " << garage[i].transmissionType << endl;
            cout << "------------------------" << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "Car with this transmission type not found." << endl;
    }
}

void searchByEnginePower(double enginePower) {
    bool found = false;
    for (int i = 0; i < carCount; ++i) {
        if (garage[i].enginePower == enginePower) {
            cout << "Length: " << garage[i].length << " meters" << endl;
            cout << "Clearance: " << garage[i].clearance << " meters" << endl;
            cout << "Engine Volume: " << garage[i].engineVolume << " liters" << endl;
            cout << "Engine Power: " << garage[i].enginePower << " horsepower" << endl;
            cout << "Wheel Diameter: " << garage[i].wheelDiameter << " inches" << endl;
            cout << "Color: " << garage[i].color << endl;
            cout << "Transmission Type: " << garage[i].transmissionType << endl;
            cout << "------------------------" << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "Car with this engine power not found." << endl;
    }
}

int main() {
    Car car1 = { 4.5, 0.2, 2.0, 150, 18, "Red", "Automatic" };
    Car car2 = { 4.8, 0.22, 2.5, 200, 19, "Blue", "Manual" };
    Car car3 = { 4.2, 0.18, 1.8, 120, 17, "Red", "Automatic" };

    addCar(car1);
    addCar(car2);
    addCar(car3);

    cout << "All cars:" << endl;
    showCars();

    string searchColor;
    cout << "Enter the color to search: ";
    cin >> searchColor;
    searchByColor(searchColor);

    string searchTransmission;
    cout << "Enter the transmission type to search: ";
    cin >> searchTransmission;
    searchByTransmission(searchTransmission);

    double searchEnginePower;
    cout << "Enter the engine power to search: ";
    cin >> searchEnginePower;
    searchByEnginePower(searchEnginePower);

    system("pause");
    return 0;
}
