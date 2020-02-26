#include <iostream>
#include <cstring>
#include "Product.h"

using namespace std;

Product::Product() : SKU(0), Price(0), Count(0), SizeOfShoes(0), Category(nullptr), Type(nullptr), Brand(nullptr), Model(nullptr) {};

void Product::print()
{
	cout << "The Stock keeping unit is ";
	cout << SKU << endl;
	cout << "The Price is ";
	cout << Price << endl;
	cout << "The Count is ";
	cout << Count << endl;
	cout << "The SizeOfShoes is ";
	cout << SizeOfShoes << endl;
	cout << "The Category is ";
	cout << Category << endl;
	cout << "The Type is ";
	cout << Type << endl;
	cout << "The Brand is ";
	cout << Brand << endl;
	cout << "The Model is ";
	cout << Model << endl;
}
void Product::read()
{
	cout << "SKU:";
	cin >> SKU;
	cout << "Price:";
	cin >> Price;
	cout << "Count:";
	cin >> Count;
	cout << "SizeOfShoes:";
	cin >> SizeOfShoes;
	cout << "Category:";
	char category[100];
    cin.ignore();
	cin.getline(category,100);
	setCategory(category);
	cout << "Type:";
	char type[100];
	cin.getline(type,100);
	setType(type);
	cout << "Brand:";
	char brand[100];
	cin.getline(brand,100);
	setBrand(brand);
	cout << "Model:";
	char model[100];
	cin.getline(model,100);
	setModel(model);
}

void Product::setSKU(int _SKU)
{
	SKU = _SKU;
}
void Product::setPrice(int _Price)
{
	Price = _Price;
}
void Product::setCount(int _Count)
{
	Count = _Count;
}
void Product::setSizeOfShoes(int _SizeOfShoes)
{
	SizeOfShoes = _SizeOfShoes;
}
void Product::setCategory(const char* _Category)
{
	Category = new char[strlen(_Category) + 1];
	strcpy(Category, _Category);
}
void Product::setType(char* _Type)
{
	Type = new char[strlen(_Type) + 1];
	strcpy(Type, _Type);
}
void Product::setBrand(char* _Brand)
{
	Brand = new char[strlen(_Brand) + 1];
	strcpy(Brand, _Brand);
}
void Product::setModel(char* _Model)
{
	Model = new char[strlen(_Model) + 1];
	strcpy(Model, _Model);
}

int Product::getSKU() const
{
	return SKU;
}
int Product::getPrice() const
{
	return Price;
}
int Product::getCount() const
{
	return Count;
}
int Product::getNumberOfShoes() const
{
	return SizeOfShoes;
}
char* Product::getCategory() const
{
	return Category;
}
char* Product::getType() const
{
	return Type;
}
char* Product::getBrand() const
{
	return Brand;
}
char* Product::getModel() const
{
	return Model;
}

Product::~Product() {
	delete[] Category;
	delete[] Model;
	delete[] Type;
	delete[] Brand;
}
