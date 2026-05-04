#include<vector>
#include "DocumentElement.h"
using namespace std;

class Document{
private: 
    vector<DocumentElement*> documentElements;
public:
    void addElement(DocumentElement* element){
        documentElements.push_back(element);
    }

    string render(){
        string result;
        for(auto element : documentElements){
            result += element->render();
        }

        return result;
    }

};
