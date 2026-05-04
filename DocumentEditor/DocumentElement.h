#include<string>
using namespace std;

class DocumentElement{
public:
    virtual string render() = 0;
};

class TextElement : public DocumentElement{
private:
    string text;
public:
    TextElement(string text){
        this->text = text;
    }

    string render() override{
        return text;
    }
};

class ImageElement : public DocumentElement{
private:
    string imagePath;
public:
    ImageElement(string imagePath){
        this->imagePath = imagePath;
    }

    string render() override{
        return "[Image: " + imagePath + "]";;
    }
};

class NewLineElement : public DocumentElement{
public:
    string render() override{
        return "\n";
    }
};

class NewTabElement : public DocumentElement{
public:
    string render() override{
        return "\t";
    }
};
