
#include<string>
#include<iostream>
#include<fstream>
using namespace std;

class Persistence{
public:
    virtual void save(string data) = 0;
};

class FileStorage : public Persistence{
public:
    void save(string data) override{
        ofstream outFile("document.txt");
        if(outFile){
            outFile << data;
            outFile.close();
            cout << "Document saved to document.txt" << endl;
        }else{
            cout << "Error: Unable to open file for writing." << endl;
        }

    }
};

class DBStorage : public Persistence{
public:
    void save(string data) override{
        cout<<"Saving Data to DBStorage" <<endl;
    }
};
