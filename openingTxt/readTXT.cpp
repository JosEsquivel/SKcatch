#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[]) {
 //string InputTXT = argc > 1 ? argv[1] : "there was no input";
 char* name = argv[1];
 if(argc>1){
 	cout<<"starting execution"<<endl;
 }
 else{
 	cout<<"no input file, execution finished"<<endl;
 	return -1;
 }

 ifstream myReadFile;
 //char* name = "input.txt";
 myReadFile.open(name);
 char output[100];
 if (myReadFile.is_open()) {
 while (!myReadFile.eof()) {


    myReadFile >> output;
    cout<<output;


 }
}
myReadFile.close();
return 0;
}