#include <iostream>
#include <fstream>
#include <typeinfo>
#include <string> 
using namespace std;

int main(int argc, char* argv[]) {
 
 char* name = argv[1];
 if(argc>1){
    cout<<"starting execution"<<endl;
 }
 else{
    cout<<"no input file, execution finished"<<endl;
    return -1;
 }

 ifstream myReadFile;
 
 myReadFile.open(name);
 char output[100];
 string nRows;
 string nCols;

  if (myReadFile.good()) //reading the status of the file
  {
    string sLine;        //variable to store the current row from the input file
    getline(myReadFile, sLine); //saving the current row to the variable sLine
    //cout << sLine.length() << endl; //getting the number of characters inside sLine
    int spaceIndx;          
    for(int i = 0; i < sLine.length(); i++){ //iterate inside the first row
        //cout << sLine[i];
        if (sLine[i] == ' '){       //in case a space char is found, its position is saved in spaceIndx
            spaceIndx = i;
        }
    }
    //cout<<"indice"<<spaceIndx<<endl;

    nRows = sLine.substr (0,spaceIndx); //substring to get the number of rows as a String
    //cout<<"nRows "<<nRows<<endl;
    nCols = sLine.substr (spaceIndx+1,sLine.length()); //substring to get the number of columns as a String
    //cout<<"nCols "<<nCols<<endl;

    int Rows = stoi(nRows);  //conversion from string to int
    int Cols = stoi(nCols);
    cout<<"Rows "<<Rows<<" "<<"Cols "<<Cols<<endl;

    string Xd,Yd;
    getline(myReadFile, sLine); //saving the current row to the variable sLine          
    for(int i = 0; i < sLine.length(); i++){ //iterate inside the first row
        //cout << sLine[i];
        if (sLine[i] == ' '){       //in case a space char is found, its position is saved in spaceIndx
            spaceIndx = i;
        }
    }
    Xd = sLine.substr (0,spaceIndx); //substring to get the x position of the drone as a String
    Yd = sLine.substr (spaceIndx+1,sLine.length()); //substring to get the y position of the drone as a String
    int xHome = stoi(Xd);  //conversion from string to int
    int yHome = stoi(Yd);
    cout<<"Xd "<<xHome<<" "<<"Yd "<<yHome<<endl;

    string Xb,Yb;
    getline(myReadFile, sLine); //saving the current row to the variable sLine          
    for(int i = 0; i < sLine.length(); i++){ //iterate inside the first row
        //cout << sLine[i];
        if (sLine[i] == ' '){       //in case a space char is found, its position is saved in spaceIndx
            spaceIndx = i;
        }
    }
    Xb = sLine.substr (0,spaceIndx); //substring to get the x position of the battery as a String
    Yb = sLine.substr (spaceIndx+1,sLine.length()); //substring to get the y position of the battery as a String
    int xTarget = stoi(Xb);  //conversion from string to int
    int yTarget = stoi(Yb);
    cout<<"Xb "<<xTarget<<" "<<"Yb "<<yTarget<<endl;


  }


myReadFile.close();
return 0;
}