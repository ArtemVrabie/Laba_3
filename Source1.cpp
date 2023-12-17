#include <iostream>
#include <string>
using namespace std;

class Company {
public:
    int price;
    string name;
    int age;
    int number_of_people;

    Company() : name("Name"), number_of_people(10), age(19), price(10000) {}

    Company(string name, int count_of_people, int age, int price) : name(name), number_of_people(count_of_people), age(age), price(price) {}

    void CompanyInfo() {
        cout << "�������� ��������: " << name << "\n���������� ����������� " << number_of_people << "\n������� ��������: " << age << "\n��������� ��������: " << price << "\n___________" << endl;
    }
};





class Employee : public Company {
public:
    int members_of_family;
    int age_of_emp;
    string name_of_emp;
    int money;

    Employee() : members_of_family(3), money(1000000) {}
    Employee(string name_of_emp, int age_of_emp, int members_of_family, int money) : name_of_emp(name_of_emp), age_of_emp(age_of_emp), members_of_family(members_of_family), money(money) {}

    void EmployeeInfo() {
        cout << "��� ��������: " << name_of_emp << "\n�������: " << age_of_emp << "\n���������: " << money << "\n���������� ������ �����: " << members_of_family << "\n___________" << endl;
    }
};








class Vehicle : public Company {
public:
    string brand;
    int price;
    int year;;
    string color;


    Vehicle() : brand("Vehicle"), price(0), year(0), color("Color") {}
    Vehicle(string brand, int price, int year, string color) : brand(brand), price(price), year(year), color(color) {}

    void VehicleInfo() {
        cout << "�����: " << brand << "\n����: $" << price << "\n��� �������: " << year << "\n����: " << color << "\n___________" << endl;
    }
};






class Truck : public Vehicle {
public:
    int capacity;
    int mass;

    Truck() : capacity(0), mass(0) {}

    Truck(int capacity, int mass, string brand, int price, int year, string color) : capacity(capacity), mass(mass), Vehicle(brand, price, year, color) {}


    void TruckInfo() {
        cout << "�����: " << brand << "\n����������������: " << capacity << "\n����� " << mass << "\n����: $" << price << "\n___________" << endl;
    }
};








class Car : public Vehicle {
public:
    int seats;
    int weight;

    Car() : seats(seats), weight(weight) {}

    Car(int seats, int weight, string brand, int price, int year, string color) : seats(seats), weight(weight), Vehicle(brand, price, year, color) {}


    Car(int seats, int weight, Vehicle& vehicle) : seats(seats), weight(weight), Vehicle(vehicle) {}

    void CarInfo() {
        cout << "���������� ����: " << seats << "\n�����: " << weight << "\n�����: " << brand << "\n����: $" << price << "\n��� �������: " << year << "\n����: " << color << endl;
    }
};







int main() {

    setlocale(LC_ALL, "ru");

    Company c1("Nimbus", 43566, 16, 500000000);
    c1.CompanyInfo();



    Employee emp1("Lida", 19, 5, 10000);
    emp1.EmployeeInfo();



    Vehicle v1("PEUGEOT", 10000, 2010, "White");
    v1.VehicleInfo();



    Truck t1(1000, 20000, "Scania", 60000, 2011, "White");
    t1.TruckInfo();



    Car car1(5, 1500, "Mercedes-Benz", 150000, 2023, "Black");
    car1.CarInfo();


    return 0;
}