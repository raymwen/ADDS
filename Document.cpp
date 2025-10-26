#include "Document.h"

Document::Document(int id, std::string nm, int limit){
    docid = id;
    name = nm;
    license_limit = limit;
    active_licenses = 0;
    
}