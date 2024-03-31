#include <iostream>
#include <vector>

using namespace std;

std::vector<int> pool;

uint64_t target=999;

void div_n_con(int begin,int len){
    int get_middle=((len-begin)/2)+begin;

    if(target>pool.at(get_middle)){

        div_n_con(get_middle+1,len);

    } else if(target<pool.at(get_middle)){
        
        div_n_con(begin,len-1);

    } else{
        cout<<"found target "<<target<<" at index "<<get_middle<<" which results "<<pool.at(get_middle)<<endl;
    };

};


int main(){
    for(uint64_t i=0;i<1000;i++){
        pool.push_back(i);
    };

    int* len=new int();

    *len=pool.size();

    div_n_con(0,*len);

    delete len;

    return 0;
}