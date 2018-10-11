#include <iostream>
#include <string>
#include "hw07ec.h"
using namespace std;
namespace inputspace
{
int amount;
float price;
string purchase;
char item;
} // namespace inputspace

//inventory management with pointers
int main()
{

    bool again = false;
    char reply;
    ManageInventory purchases = ManageInventory(50);
    ManageInventory inventory = ManageInventory(50);
    inventory.fillInventory();
    cout << "Original inventory" << endl;

    inventory.printInventory();
    cout << endl;
    cout << endl;

    while (again == false)
    {
        cout << "What would you like to purchase? (input item number 1-5):";
        cin >> inputspace::item;
        switch (inputspace::item)
        {
        case '1':
            inputspace::purchase = "Nike basketball shoes";
            inputspace::price = 145.99;
            cout << "Amount: ";
            cin >> inputspace::amount;
            purchases.addItem(inputspace::purchase, inputspace::amount, inputspace::price);
            //inventory.deleteItem(inputspace::amount);
            break;
        case '2':
            inputspace::purchase = "Under Armour T-shirt";
            inputspace::price = 29.99;
            cout << "Amount: ";
            cin >> inputspace::amount;
            purchases.addItem(inputspace::purchase, inputspace::amount, inputspace::price);
            //inventory.deleteItem(inputspace::amount);
            break;
        case '3':
            inputspace::purchase = "Brooks running shoes";
            inputspace::price = 111.44;
            cout << "Amount: ";
            cin >> inputspace::amount;
            purchases.addItem(inputspace::purchase, inputspace::amount, inputspace::price);
            //inventory.deleteItem(inputspace::amount);
            break;
        case '4':
            inputspace::purchase = "Asics running shoes";
            inputspace::price = 165.88;
            cout << "Amount: ";
            cin >> inputspace::amount;
            purchases.addItem(inputspace::purchase, inputspace::amount, inputspace::price);
            //inventory.deleteItem(inputspace::amount);
            break;
        case '5':
            inputspace::purchase = "Nike shorts";
            inputspace::price = 45.77;
            cout << "Amount: ";
            cin >> inputspace::amount;
            purchases.addItem(inputspace::purchase, inputspace::amount, inputspace::price);
            //inventory.deleteItem(inputspace::amount);
            break;
        default:
            break;
        }

        cout << "Buy another item? (Y/N)";
        cin >> reply;
        if (toupper(reply) == 'N')
        {
            purchases.printInventory();
            break;
        }
        cin.ignore();
        cin.clear();
    }
    cout << endl;
    cout << "Subotal: $" << purchases.printTotal() << endl;
    cout << "Total cost (with tax): $" << purchases.printTotalTax() << endl;

    //cout << "Post-purchase inventory" << endl; //had some issues modifying the inventory amount values
    //inventory.printInventory();
  //  ManageInventory inventory2 = inventory;
  //  cout << endl;
  //  cout << endl;
  //  cout << "Copy inventory" << endl;
  //  inventory2.printInventory();
}