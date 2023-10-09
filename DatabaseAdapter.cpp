#include "DatabaseAdapter.h"

#include <regex>

void DatabaseAdapter::executeQuery(string query)
{
    string translatedQuery = translateQuery(query);

    newDB.executeNewQuery(translatedQuery);
}

string DatabaseAdapter::translateQuery(string query)
{
    regex selectRegex(R"(SELECT\s+(.*?)\s+FROM\s+(.*))");

    smatch match;
    if (regex_search(query, match, selectRegex))
    {
        string selectedColumns = match[1].str();
        string tableName = match[2].str();

        string result = "FROM " + tableName + " SELECT " + selectedColumns;

        return result;
    }
    else
    {
        return query;
    }
}
