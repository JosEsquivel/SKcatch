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

    //cout<<"Rows "<<Rows<<" "<<"Cols "<<Cols<<endl;

    int MAP[Rows][Cols];

    for (int i = 0; i < Rows; i++){     //iterate to get each value in the input assigned to a position inside the int array MAP
        getline(myReadFile, sLine); //saving the current row to the variable sLine
        for (int j = 0; j < Cols; j++){
            //cout << sLine[j];   
            MAP[i][j] =  sLine[j]- 48; //conversion to int, since the only values are 0 and 1, it is possible to do this.
        }
        //cout<<" "<<endl;
    }

  }


myReadFile.close();
return 0;
}