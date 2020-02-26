#include <iostream>
#include "Store.h"

using namespace std;

void Menu()
{
Store store;
while (true)
{
    std::cout << "A Insert product\n";
    std::cout << "X Delete product\n";
    std::cout << "C Change product\n";
    std::cout << "D Display products\n";
    std::cout << "Q Quit\n";
    char a;
    cin >> a;
    switch (a)
    {
    case 'A':
    {
        cout << "Insert product:";
        Product* p = new Product;
        p->read();
        store.addProduct(*p);
        break;
    }
    case 'X':
    {
        int SKU;
        cout << "Insert SKU:";
        cin >> SKU;
        store.deleteProduct(SKU);
        break;
    }
    case 'C':
    {
        cout << "1.Change product price" << endl;
        cout << "2.Change product type" << endl;
        cout << "3.Change number of shoes" << endl;
        cout << "4.Change product brand" << endl;
        cout << "5.Change product category" << endl;
        int input;
        cin >> input;
        switch (input)
        {
        case 1:
        {
            cout << "Input product SKU and new price" << endl;
            int _price, _sku;
            cin >> _sku >> _price;
            store.ChangeProductPrice(_price, _sku);
            break;
        }
        case 2:
        {
            cout << "Input product SKU and new type" << endl;
            char _type[100];
            int _sku;
			cin >> _sku;
			cin.ignore();
			cin.getline(_type, 100);
            store.ChangeProductType(_type, _sku);
            break;
        }
        case 3:
        {
            cout << "Input product SKU and new number of shoes" << endl;
            int _NumberOfShoes;
            int _sku;
            cin >> _sku >> _NumberOfShoes;
            store.ChangeProductNumberOfShoes(_NumberOfShoes, _sku);
            break;
        }
        case 4:
        {
            cout << "Input product SKU and new brand" << endl;
            int _sku;
            char _Brand[100];
			cin >> _sku;
			cin.ignore();
			cin.getline(_Brand, 100);
            store.ChangeProductBrand(_Brand, _sku);
            break;
        }
        case 5:
        {
            cout << "Input product SKU and Category" << endl;
            int _sku;
			char _Category[100];
            cin >> _sku;
			cin.ignore();
			cin.getline(_Category, 100);
            store.ChangeProductCategory(_Category, _sku);
            break;
         }
            default:break;
        }
        break;
    }
    case 'D':
    {
        store.print();
        break;
    }
    case 'Q':
    {
        return;
    }
    default:
        cout << "Wrong input!" << endl;
        break;
    }
}
}


int main()
{
    Menu();

return 0;
}