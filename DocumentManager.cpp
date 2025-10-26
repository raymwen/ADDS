#include "DocumentManager.h"

    void DocumentManager::addDocument(std::string name, int id, int license_limit){
        docs.push_back(Document(id, name, license_limit));
    }

    void DocumentManager::addPatron(int patronID){
        patrons.push_back(patronID);
    }

    int DocumentManager::search(std::string name){
        for(int i=0;i<docs.size();i++){
            if(docs[i].name == name){
                return docs[i].docid;
            }
        }
        return 0;
    }

    bool DocumentManager::borrowDocument(int docid, int patronID){
        for(int i=0;i<patrons.size();i++){
            if(patrons[i] == patronID){
                for(int j=0;j<docs.size();j++){
                    if(docs[j].docid == docid){
                        if(docs[j].active_licenses < docs[j].license_limit){
                            docs[j].active_licenses++;
                        }else{
                            return false;
                        }
                    }
                }
            }
        }

        return false;
    }

    void DocumentManager::returnDocument(int docid, int patronID){
        for(int i=0;i<patrons.size();i++){    
            if(patrons[i]==patronID){    
                for(int j=0;j<docs.size();j++){
                    if(docs[j].docid == docid){
                        docs[j].active_licenses--;
                    }
                }
            }
        }

    }