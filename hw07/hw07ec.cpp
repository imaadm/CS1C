#include <iostream>
#include <string>
#include "hw07ec.h"

using namespace std;

void ManageInventory::addItem(string n, int q, float c)
{
    if (count < MAX_SIZE)
    {
        Item *x = new Item;
        (*x).name = n;
        (*x).quantity = q;
        (*x).cost = c;
        p_pInventoryItems[count] = x;
        count++;
    }
    else
        cout << "Inventory items are full" << endl;
}

void ManageInventory::deleteItem(int q)
{
    (*p_pInventoryItems[count]).quantity = ((*p_pInventoryItems[count]).quantity - q); 
}

void ManageInventory::fillInventory()
{
    addItem("Nike basketball shoes", 22, 145.99);
    addItem("Under Armour T-shirt", 33, 29.99);
    addItem("Brooks running shoes", 11, 111.44);
    addItem("Asics running shoes", 20, 165.88);
    addItem("Nike shorts", 77, 45.77);
}

ManageInventory::ManageInventory()
{
    size = MAX_SIZE;
    count = 0;
    p_pInventoryItems = new Item *[size];
}

ManageInventory::ManageInventory(int s)
{
    size = s;
    count = 0;
    p_pInventoryItems = new Item *[size];  
}

ManageInventory::ManageInventory(const ManageInventory &i2)
{
    p_pInventoryItems = new Item *[size];
    p_pInventoryItems = i2.p_pInventoryItems;
}

ManageInventory::~ManageInventory()
{
    delete p_pInventoryItems;
}

void ManageInventory::printInventory()
{
    cout << "|Name         |  Cost  |  Quantity  |" << endl;
    for (int i = 0; i < count; i++)
    {
        cout << "|" << (*p_pInventoryItems[i]).name 
             << "  |  " 
             << (*p_pInventoryItems[i]).cost 
             << "  |  "
             << (*p_pInventoryItems[i]).quantity 
             << "  |" << endl;
    }
}

float ManageInventory::printTotal()
{
    float total;
    for (int i = 0; i < count; i++)
        total += ((*p_pInventoryItems[i]).cost*(*p_pInventoryItems[i]).quantity);
    return total;
}

float ManageInventory::printTotalTax()
{
    float total;
    for (int i = 0; i < count; i++)
        total += (((*p_pInventoryItems[i]).cost*1.0825)*(*p_pInventoryItems[i]).quantity);
    return total;

}