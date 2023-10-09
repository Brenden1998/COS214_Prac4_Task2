#ifndef TASK_2_ORM_H
#define TASK_2_ORM_H

#include <string>

using namespace std;

class ORM {
public:
    virtual void executeQuery(string query) = 0;
};


#endif //TASK_2_ORM_H
