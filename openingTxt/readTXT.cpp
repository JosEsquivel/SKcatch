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

    int MAP[Rows][Cols]; //array to save the map
    int Mines[Rows+2][Cols+2]; //array to count the number of mines

    for (int i = 0; i < Rows; i++){     //iterate to get each value in the input assigned to a position inside the int array MAP
        getline(myReadFile, sLine); //saving the current row to the variable sLine
        for (int j = 0; j < Cols; j++){
            //cout << sLine[j];   
            MAP[i][j] =  sLine[j]- 48; //conversion to int, since the only values are 0 and 1, it is possible to do this.
        }
        //cout<<" "<<endl;
    }

    for(int i = 0; i < Rows; i++){          //copy the MAP array into the Mines array but with a border
        for(int j = 0; j < Cols; j++){
            Mines[i+1][j+1] = MAP[i][j];
        }
    }

    for(int i = 0; i < Rows +2; i++){       //fill in the border of array Mine with number 2
        Mines[i][0] = 2;
        Mines[i][Rows+1] = 2;
    }

    for(int i = 0; i < Cols +2; i++){      //fill in the border of array Mine with number 2
        Mines[0][i] = 2;
        Mines[Cols+1][i] = 2;
    }    

    /*for(int i = 0; i < Rows+2; i++){
        for(int j = 0; j < Cols+2; j++){
            cout<<Mines[i][j];
        }
        cout<<" "<<endl;
    }*/

    int currentMinesNumber = -1;

    int Operations[8][2] = {{-1,-1},{0,-1},{1,-1},{-1,0},{1,0},{-1,1},{0,1},{1,1}};

    for(int i = 0; i < Rows; i++){
        for(int j = 0; j < Cols; j++){
            if(Mines[i+1][j+1] == 1 && currentMinesNumber == -1){
                Mines[i+1][j+1] = currentMinesNumber;
                currentMinesNumber--;
            }
            else if(Mines[i+1][j+1] == 1){

                for (int k =0; k < 8; k++){
                    if(Mines[i+1+Operations[k][0]][j+1+Operations[k][1]] < 0){
                        Mines[i+1][j+1] = Mines[i+1+Operations[k][0]][j+1+Operations[k][1]];
                        break;
                    }
                    if(k == 7){
                        Mines[i+1][j+1] = currentMinesNumber;
                        currentMinesNumber--;
                    }                        
                }                
                    

            }
        }
    }

    for(int i = 0; i < Rows+2; i++){
        for(int j = 0; j < Cols+2; j++){
            cout<<Mines[i][j];
        }
        cout<<" "<<endl;
    }    

    cout<<-(currentMinesNumber+1)<<endl;    



  }


myReadFile.close();
return 0;
}