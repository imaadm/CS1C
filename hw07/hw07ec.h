#ifndef _HW07ECH_
#define _HW07ECH_
#include <iostream>
#include <string>

struct Item
{
    std::string name;
    int quantity;
    float cost;
};

const int MAX_SIZE = 50;

class ManageInventory
{
  public:
    ManageInventory();
    ManageInventory(int s);
    ManageInventory(const ManageInventory &i2);
    ~ManageInventory();
    void addItem(std::string n, int q, float c);
    void deleteItem(int q);
    void printInventory();
    float printTotal();
    float printTotalTax();
    void fillInventory();

  private:
    int size;
    int count;
    Item **p_pInventoryItems;
};

#endif