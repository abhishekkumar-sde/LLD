#include "DocumentEditor.h"

int main(){
    Document* doc = new Document();
    Persistence* db = new FileStorage();
    DocumentEditor* docEditor = new DocumentEditor(doc, db);

    docEditor->addText("Hello, world!");
    docEditor->addNewLine();
    docEditor->addText("This is my First Document");
    docEditor->addNewLine();
    docEditor->addTabSpace();
    docEditor->addText("Indented text after a tab space.");
    docEditor->addNewLine();
    docEditor->addImage("picture.jpg");


    // render the whole document
    cout << doc->render() << endl;

    // save the doc
    db->save(doc->render());

    return 0;
}