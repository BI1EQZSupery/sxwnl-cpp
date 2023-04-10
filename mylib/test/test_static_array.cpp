#include "../mystl/static_array.h"

#include "../mystl/string.h"
using namespace mystl;
array3 get(){
    return {1.6,65.9,6.8};
}

#include <stdio.h>
int main(){
    array3 arr={1.1},arr2{1.9};
    double a=9;
    arr2.fill(a);
    a=10;
    arr2[0]=66;
    for (auto i:arr2){
        printf("arr2 -> %lf\n", i);
    }
    
    arr2.fill(999.999);
    arr2[0]=66;
    for (auto i:arr2){
        printf("arr2 -> %lf\n", i);
    }
    arr2=get();
    arr=arr2;
    arr[0]=1.23;
    for (auto i:arr){
        printf("arr -> %lf\n", i);
    }
    
    for (auto i:arr2){
        printf("arr2 -> %lf\n", i);
    }
    printf("arr -> %lf\n", arr.get(0));
    
    static_array <mystl::string, 5> mc =
    {"食中心点", "本影北界", "本影南界", "半影北界", "半影南界"};
    
	
    for (auto i:mc){
        printf("mc -> %s\n", i.c_str());
    }
		
}