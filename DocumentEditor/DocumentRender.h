#include "Document.h"

class DocumentRender{
private:
    Document* doc;
public:
    DocumentRender(Document* doc){
        this->doc = doc;
    }

    void render(){
        doc->render();
    }
};
