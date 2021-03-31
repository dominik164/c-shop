#pragma once
#include <string>
#include <iostream>
#include<iomanip>
using std::string;

class Product
{
private:
	string m_id{};
	int m_quantity{};
	double m_price{};
public:
	Product(){};
	Product(string id, double price=0,int quantity = 0) :m_id(id), m_price(price) , m_quantity(quantity) {};
	int get_quantity() { return m_quantity; }
	double get_price() { return m_price; }
	string get_id() { return m_id; }
	void change_price(double price) { m_price = price; }
	void change_quantity(int quantity) { m_quantity = quantity; };
	friend std::ostream& operator<<(std::ostream& out, const  Product& P);
};




