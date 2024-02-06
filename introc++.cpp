# include <iostream>

int main(){
    int price1 = 25;
    int price2 = 300;
    int temp = price1;
    price1 = price2;
    price2 = temp;
    
    //mathemathical expressions
    int e = 10;
    int g = 10;
    int x = 5;// we put one as a double so that we can put the variable type of the answer as a double so that incase of decimal point we get the whole number
    int y = 2;
    int z= x+y;
    int a = x-y;
    int b= x*y;
    int d = x/y;
    


// incremental and decremental in c++
    
    int f = e++;
    //f= 10 and e =11
    
    
    int h = ++g;
    // h=11 and g =11
    std::cout <<"I am going to master this thing";
    std::cout << "\nprice1:" <<price1;
    std::cout << "\nprice2:" <<price2;
    std::cout << "\nsum:" << z;
    std::cout << "\nsubtraction:" <<a;
    std::cout << "\nmultiplication:" << b;
    std::cout << "\ndivision:" <<d;
    std::cout << "\npostincremetaloriginal:" << e;
    std::cout << f;
    std::cout << g;
    std::cout << h;
    return 0;
}
