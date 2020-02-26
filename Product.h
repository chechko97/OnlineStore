#pragma once


class Product //football boots
{
private:
	int SKU, Price, Count, SizeOfShoes;
	char* Category; //brand new or second hand
	char* Type;  //Astroturf Football Boots OR Grass Football Boots OR Indoor Court Football Shoes
	char* Brand;
	char* Model;
public:
	Product();
	void print();
	void read();
	int getSKU() const;
	int getPrice() const;
	int getCount() const;
	int getNumberOfShoes() const;
	char* getCategory() const;
	char* getType() const;
	char* getBrand() const;
	char* getModel() const;
	void setSKU(int SKU);
	void setPrice(int Price);
	void setCount(int Count);
	void setSizeOfShoes(int SizeOfShoes);
	void setCategory(const char* Category);
	void setType(char* Type);
	void setBrand(char* Brand);
	void setModel(char* Model);
	~Product();
};