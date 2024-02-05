#include <stdio.h>
#include <string>
extern "C"{
    struct RCS{
        string *StringMemory[1000];
        char *charMemory[1000];
        void writeToStringMemory(string *item){
            for(int i = 0; i < 1000; i++){
                if(*stringMemory[i] != 0){
                     *stringMemory[i] = *item;
                }else{
                    printf("You cannot write to memory because it is already full");
                }
            }
        }
    };
};
