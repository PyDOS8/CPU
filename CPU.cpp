#include <stdio.h>
#include <string>
extern "C"{
    struct RCS{
        std::string*memory[3];
        void writeToMemory(std::string *item){
            for(int i = 0; i < 3; i++){
                if(*memory[i] == ""){
                    *memory[i] = *item;
                }else{
                    *memory[i] = "";
                    *memory[i] = *item;
                }
            }
        }
        void clearMemory(){
            for(int i = 0; i < 3; i++){
                if(*memory[i] != ""){
                    *memory[i] = "";
                }else{
                    printf("Cannot clear the memory because it is already cleared!\n");
                }
            }
        }
        void deallocateStringMemory(){
            for(int i = 0; i < 4; i++){
                memory[i] = nullptr;
                delete[] memory;
            }
        }
    };
    struct RID{
        double *doubleMemory[3];
        int *intMemory[3];
        void writeToDoubleMemory(int index, double value){
            if(*doubleMemory[index] == 0){
                *doubleMemory[index] = value;
            }else{
                *doubleMemory[index] = 0;
                *doubleMemory[index] = value;
            }
        }
        void clearDoubleMemory(int index){
            if(*doubleMemory[index] > 0){
                *doubleMemory[index] = 0;
            }else{
                printf("Cannot clear memory because it is already empty!\n");
            }
        }
        void writeToIntMemory(int index, int value){
            if(*intMemory[index] == 0){
                *intMemory[index] = value;
            }else{
                printf("Cannot write to memory because it is full!\n");
            }
        }
        void clearIntMemory(int index){
            if(*intMemory[index] > 0){
                *intMemory[index] = 0;
            }else{
                printf("Cannot clear memory because it is already empty \n");
            }
        }
        void deallocateIntMemory(){
            for(int i = 0; i < 4; i++){
                *intMemory[i] = nullptr;
                *intNemory = nullptr;
            }
        }
        void deallocateDoubleMemory(){
            for(int i = 0; i < 4; i++){
                *doubleMemory[i] = nullptr;
                *intMemory = nullptr;
            }
        }
    };
