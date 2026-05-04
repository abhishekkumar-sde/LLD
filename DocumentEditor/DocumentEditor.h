#include "Document.h"
#include "Persistence.h"


class DocumentEditor{
private:
    Document* document;
    Persistence* db;
    string renderedDocument;
public:
    DocumentEditor(Document* document, Persistence* db){
        this->document = document;
        this->db = db;
    }

    void addText(string text){
        document->addElement(new TextElement(text));
    }

    void addImage(string path){
        document->addElement(new ImageElement(path));
    }

    void addNewLine() {
        document->addElement(new NewLineElement());
    }

    void addTabSpace() {
        document->addElement(new NewTabElement());
    }
};
