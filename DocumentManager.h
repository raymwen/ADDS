#ifndef DOCUMENTMANAGER_H
#define DOCUMENTMANAGER_H
#include <string>
//#include "Document.h"
#include <vector>

class DocumentManager{

    public:

    std::vector<Document> docs;

    std::vector<int> patrons;

    //public:

    void addDocument(std::string name, int id, int license_limit);

    void addPatron(int patronID);

    int search(std::string name); // returns docid if name is in the document collection or 0 if the name is not in the collection

    bool borrowDocument(int docid, int patronID);  // returns true if document is borrowed, false if it can not be borrowed (invalid patronid or the number of copies current borrowed has reached the license limit)

    void returnDocument(int docid, int patronID);
};


class Document{

    public:

    int docid;

    int license_limit;

    std::string name;
    
    int active_licenses;

    Document(int id, std::string nm, int limit){
        docid = id;
        name = nm;
        license_limit = limit;
        active_licenses = 0;
    };

};
#endif