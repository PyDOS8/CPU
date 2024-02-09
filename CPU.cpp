#include <iostream>
#include <map>
#include <string>
using namespace std;
class CPU{
    public:
    map<int, double> RID;
    map<char, string> RCS;
    map<double, float> RDF;
    int *insRegister = nullptr;
    insRegister = new int[1000];
    double  RIDMemory[1000];
    double RDFMemory[1000];
    string RSCMemory[1000];
    void addRID(){
        if(RID[0] > 0 && RID[1] > 0.0){
            RID[1] = RID[1] + RID[0];
        }else{
            cout << "You cannot adding when the registers are empty!" << endl;
        }
    }
    void subRID(){
        if(RID[0] > 0 && RID[1] > 0.0){
            RID[1] = RID[1] + RID[0];
        }else{
            cout << "You cannot subtract when the registers are empty!" << endl;
        }
    }  
    void mulRID(){
        if(RID[0] > 0 && RID[1] > 0){
            RID[1] = RID[1] *  RID[0];
        }else{
            cout << "You cannot multiply when the registers are empty!" << endl;
        }
    }  
    void divRID(){
        if(RID[0] > 0 && RID[1] > 0){
            RID[1] = RID[1] / RID[0];
        }else{
            cout << "You cannot divide when the registers are empty!" << endl;
        }
    }
    void writeToRIDMemory(){
        for(int i = 0; i < 1000; i++){
            int RIDIntMemory = (int)RIDMemory;
            if(RIDIntMemory < 1000){
                RIDIntMemory[i] = RID[1];
            }else{
                cout << "The RIDMemory is too full!" << endl;
                RIDMemory[i] = 0;
            }
        }
    }
    void clearRIDMemory(){
        for(int i = 0; i < 1000; i++){
            if(RIDIntMemory[i] > 0){
                RIDIntMemory[i] = 0;
            }else{
                cout << "You cannot clear the RIDMemory because it is already empty" << endl;
            }
        }
    }
    void clearINSRegister(){
        for(int i = 0; i < 1000; i++){
            if(*insRegistr[i] > 0){
                *insRegister[i] = 0;
            }else{
                cout << "You cannot clear the INSRegister because it is already empty" << endl;
            }
        }
    }
    void deallocateINSRegister(){
        for(int i = 0; i < 1000; i++){
            if(*INSRegister[i] > 0){
                *INSRegister[i] = nullptr;
                delete[] INSRegister;
            }
        }
    }
    void WriteStringToRSCMemory(string str){
        for(int i = 0; i < 1000; i++){
            if(RSCMemory[i] == 0){
                RSCMemory[i] = str;
            }
        }
        void clearRSCMemory(){
            for(int i = 0; i < 1000; i++){
                if(RSCMemory[i] > 0){
                    RSCMemory[i] = 0;
                }else{
                    cout << "The RSCMemory is already empty" << endl;
                }
            }
        }
    }

    deallocateINSRegister();
};

int main(){
    CPU cpu;
    cpu.RID[1] = 5;
    cpu.RID[0] = 5;
    cpu.addRID();
    cout << cpu.RID[1] << endl;
    return 0;
}