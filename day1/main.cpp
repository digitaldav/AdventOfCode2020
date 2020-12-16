#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

int main(){

    ifstream mFile;
    mFile.open("data.txt");

    vector<int> data;
    int DataValue;

    if(mFile.is_open()){
        while(mFile >> DataValue){
            data.push_back(DataValue);
        }
    }
    int value1=0, value2=0;
    for(int i = 0; i<data.size();i++){
        for(int j = 0; j<data.size();j++){
            if(data[i]+data[j]==2020){
                value1 = data[i];
                value2 = data[j];
                break;
            }
        }
    }

    cout << value1 << " + " << value2 << "= " << value1+value2 << endl;
    cout << value1 << " * " << value2 << "= " << value1*value2 << endl;


}



