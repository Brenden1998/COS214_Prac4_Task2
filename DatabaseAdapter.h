#ifndef TASK_2_DATABASEADAPTER_H
#define TASK_2_DATABASEADAPTER_H

#include "ORM.h"
#include "NewDatabase.h"

#include <string>

using namespace std;

class DatabaseAdapter : public ORM {
private:
    NewDatabase newDB;
    string translateQuery(string query);

public:
    void executeQuery(string query) override;
};


#endif //TASK_2_DATABASEADAPTER_H
