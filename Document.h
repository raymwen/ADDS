#ifndef DOCUMENT_H
#define DOCUMENT_H
#include <string>

class Document{

    public:

    int docid;

    int license_limit;

    std::string name;
    
    int active_licenses;

    Document(int id, std::string nm, int limit);

};

#endif