#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

int main(){

    ifstream mFile;
    mFile.open("data.txt");

    vector<int> data;
    int DataValue;

    int value1=0, value2=0, value3=0;

    if(mFile.is_open()){
        while(mFile >> DataValue){
            data.push_back(DataValue);
        }
    }
    
    //O(n3) :(
    for(int i = 0; i<data.size();i++){
        for(int j = 0; j<data.size();j++){
            for(int c = 0 ; c<data.size();c++){
                if(data[i]+data[j]+data[c]==2020){
                value1 = data[i];
                value2 = data[j];
                value3 = data[c];
                break;
            }
            }
        }
    }

    cout << value1 << " + " << value2 << " + " << value3 << "= " << value1+value2+value3 << endl;
    cout << value1 << " * " << value2 << " * " << value3 << "= " << value1*value2*value3 << endl;


}



