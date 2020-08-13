#include <iostream>

// What does the Static keyword mean in Cpp?
// 
// Static in cpp has two meanings. 
//
//		1: a Static variable or function outside a class will only be visible to 
//         the translation unit (Source file post preprocessing) it occupies.
//         (This is the focus of this video/file)
//
//		2: A static variable or method inside a class/struct will share memory
//        with all instances of that class/struct. There will only be one instance of
//        a static variable/method inside a class/struct (This will be expanded in another video/file)


//      If you declare a static variable/function/method in a header file. Then you will create 
//      a static variable in each file you include the header in.

// Why would you use static?

// Static helps limiting your variables and functions to specific source files. This can prevent
// alot of bugs. Cherno recomends using static whenever you don't need to use a varable/function 
// outside of its translation unit.



int s_Variable = 10; // A global s_Variale is declared in both main.cpp and source.cpp. 
                     //Because the static keyword is used in the source.cpp file
                     // that variable will only be visible in the source.cpp translation unit.


extern int e_Variable; //External linking - makes this variable reffer to an external variable 
                       // with the same name-

void function() // There is a function called function declared in source.cpp aswell. The static keyword
                // prevents a linking error due to two instances of the same function being present
{

}

int main()
{

	std::cout << s_Variable << std::endl;
    std::cout << e_Variable << std::endl; 

   

	return 0;
}