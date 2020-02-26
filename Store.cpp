#include <iostream>
#include "Store.h"
#include "Product.h"

void Store::resize() {
    auto * newCollection = new Product[maxEntries * 2];
    for (int i = 0; i < curEntries; i++) {
        newCollection[i] = products[i];
    }
    delete[] products;
    products = newCollection;
    maxEntries *= 2;
}

Store::Store() {
    curEntries = 0;
    maxEntries = 4;
    products = new Product[maxEntries];
}

void Store::addProduct(const Product& p) {
    if(curEntries == maxEntries) {
        resize();
    }
    products[curEntries++] = p;
}

void Store::deleteProduct(int SKU) 
{
    Product* newProducts = nullptr;
    if (curEntries == 1) {
        products = nullptr;
        curEntries--;
        return;
    } else {
        products = new Product[curEntries - 1];
    }
    for (int i = 0; i < curEntries; i++)
	{
        newProducts[i] = products[i];
        if (products[i].getSKU() == SKU) 
		{
            for (int j = i; j < curEntries - 1; j++) 
			{
                newProducts[j] = products[j + 1];
            }
			delete[] products;
            products = newProducts;
            curEntries--;
			return;			
        }
		
    }
	std::cout << "No such product\n";
}

void Store::print() const {
    for (int i = 0; i < curEntries; i++) {
        products[i].print();
    }
}

Store::~Store()
{
	delete[] products;
}
void Store::ChangeProductPrice(int Price, int SKU)
{
	for (int i = 0; i < curEntries; i++)
	{
		if (products[i].getSKU() == SKU)
		{
			products[i].setPrice(Price);
            return;
		}
	}
	std::cout << "No such product\n";
}
void Store::ChangeProductType(char* Type, int SKU)
{
	for (int i = 0; i < curEntries; i++)
	{
		if (products[i].getSKU() == SKU)
		{
			products[i].setType(Type);
            return;
		}
	}
	std::cout << "No such product\n";
}
void Store::ChangeProductNumberOfShoes(int NumberOfShoes, int SKU)
{
	for (int i = 0; i < curEntries; i++)
	{
		if (products[i].getSKU() == SKU)
		{
			products[i].setSizeOfShoes(NumberOfShoes);
            return;
		}
	}
	std::cout << "No such product\n";
}
void Store::ChangeProductBrand(char* Brand, int SKU)
{
	for (int i = 0; i < curEntries; i++)
	{
		if (products[i].getSKU() == SKU)
		{
			products[i].setBrand(Brand);
            return;
		}
	}
	std::cout << "No such product\n";
}
void Store::ChangeProductCategory(char* Category, int SKU)
{
	for (int i = 0; i < curEntries; i++)
	{
		if (products[i].getSKU() == SKU)
		{
			products[i].setCategory(Category);
            return;
		}
	}
	std::cout << "No such product\n";	
}