#pragma once
#include <iostream>
#include <string>

using namespace std;

class Hotel {
private:
	string name = "Unknown";
	string location = "Unknown";
	int stars = 0;
	int rooms = 0;
	int bookedRooms = 0;
	int freeRooms = 0;
	int price = 0;
public:
	Hotel() {
		cout << "Constructor called" << endl;
	}
	Hotel(string name, string location, int stars, int rooms, int bookedRooms, int freeRooms, int price) {
		this->name = name;
		this->location = location;
		this->stars = stars;
		this->rooms = rooms;
		this->bookedRooms = bookedRooms;
		this->freeRooms = freeRooms;
		this->price = price;
	}
	~Hotel() {
	}

	// Setters

	void setName(string name) {
		this->name = name;
	}
	void setLocation(string location) {
		this->location = location;
	}
	void setStars(int stars) {
		this->stars = stars;
	}
	void setRooms(int rooms) {
		this->rooms = rooms;
	}
	void setBookedRooms(int bookedRooms) {
		this->bookedRooms = bookedRooms;
	}
	void setFreeRooms(int freeRooms) {
		this->freeRooms = freeRooms;
	}
	void setPrice(int price) {
		this->price = price;
	}

	// Getters

	string getName() {
		return name;
	}
	string getLocation() {
		return location;
	}
	int getStars() {
		return stars;
	}
	int getRooms() {
		return rooms;
	}
	int getBookedRooms() {
		return bookedRooms;
	}
	int getFreeRooms() {
		return freeRooms;
	}
	int getPrice() {
		return price;
	}

	void print() {
		cout << "Hotel info:" << endl;
		cout << "----------------" << endl;
		cout << "Name: " << name << endl;
		cout << "Location: " << location << endl;
		cout << "Stars: " << stars << endl;
		cout << "Rooms: " << rooms << endl;
		cout << "Booked rooms: " << bookedRooms << endl;
		cout << "Free rooms: " << freeRooms << endl;
		cout << "Price: " << price << endl;
	}
};

class Booking {
private:
	Hotel hotel;
	string name = "Unknown";
	string surname = "Unknown";
	string email = "Unknown";
	string phone = "Unknown";
	int days = 0;
	int rooms = 0;
public:
	Booking() {
	}
	Booking(Hotel hotel, string name, string surname, string email, string phone, int days, int rooms) {
		this->hotel = hotel;
		this->name = name;
		this->surname = surname;
		this->email = email;
		this->phone = phone;
		this->days = days;
		this->rooms = rooms;

	}

	Booking(string name, string surname, string email, string phone) {
		this->name = name;
		this->surname = surname;
		this->email = email;
		this->phone = phone;

	}

	Booking(string name, string surname, string email, string phone, int days, int rooms) {
		this->name = name;
		this->surname = surname;
		this->email = email;
		this->phone = phone;
		this->days = days;
		this->rooms = rooms;
	}
	~Booking() {
	}
};

class Values {
private:
	int numdays;
	int numrooms;
	int hotelnum;
public:
	Values() {
		numdays = 1;
		numrooms = 1;
		hotelnum = 1;
	}
	~Values() {
	}
	int getNumDays() {
		return numdays;
	}
	int getNumRooms() {
		return numrooms;
	}
	int getHotelNum() {
		return hotelnum;
	}
	void setNumDays(int numdays) {
		this->numdays = numdays;
	}
	void setNumRooms(int numrooms) {
		this->numrooms = numrooms;
	}
	void setHotelNum(int hotelnum) {
		this->hotelnum = hotelnum;
	}
};

