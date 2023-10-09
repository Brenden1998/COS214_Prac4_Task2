#include <iostream>

#include "ORM.h"
#include "DatabaseAdapter.h"

using namespace std;

int main() {

    ORM* existingORM = new DatabaseAdapter();

    string query = "SELECT name FROM table1";

    cout << "Original Query: " << query << endl;
    existingORM->executeQuery(query);

    delete existingORM;

    return 0;
}
