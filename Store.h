#ifndef ZAD1_PERSON_H
#define ZAD1_PERSON_H
#include "Product.h"

class Store
{
public:
	Product* products;
	int maxEntries;
    int curEntries;
    void resize();

public:
	Store();
	~Store();
    void addProduct(const Product& p);
    void deleteProduct(int SKU); //delet-ваме по уникален
	void ChangeProductPrice(int Price, int _SKU);
	void ChangeProductType(char* Type, int _SKU);
	void ChangeProductNumberOfShoes(int NumberOfShoes, int _SKU);
	void ChangeProductBrand(char* Brand, int _SKU);
	void ChangeProductCategory(char* Category, int _SKU);
    void print() const;
};
#endif