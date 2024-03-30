#include <iostream>
#include <vector>

using namespace std;

std::vector<int> pool;

int target=9;

void div_n_con(int begin,int len){
    int get_middle=(len/2);
cout<<"no seg fault at this point"<<endl;
    if(target>pool.at(get_middle)){

        div_n_con(get_middle+1,len);

    } else if(target<pool.at(get_middle)){
        
        div_n_con(len-(get_middle*2),get_middle);

    } else{
        cout<<"found target "<<target<<" at "<<pool.at(get_middle)<<endl;
    };

};


int main(){
    for(int i=0;i<10;i++){
        pool.push_back(i);
    };

    int* len=new int();

    *len=pool.size();

cout<<"length is "<<*len<<endl;
for(int i:pool)
    cout<<i<<endl;
    cout<<"mid  - "<<*len/2<<endl;
    div_n_con(0,*len);

    delete len;

    return 0;
}