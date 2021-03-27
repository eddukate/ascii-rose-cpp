#include <iostream>

/* Definir colores */

#define RED "\033[31m" /* COLOR: RED */ 
#define GREEN "\033[32m"  /* COLOR: GREEN */

using namespace std;

int main() {
    
    std::cout << RED << R"(
                   .,,. 
            .,v%;mmmmmmmm;%%vv,. 
         ,vvv%;mmmvv;vvvmmm;%vvvv,    .,,. 
  ,, ,vvvnnv%;mmmvv;%%;vvmmm;%vvvv%;mmmmmmm, 
,mmmmmm;%%vv%;mmmvv;%%;vvmmm;%v%;mmmmmmmmmmm 
mmmmmmmmmmm;%%;mmmvv%;vvmmm;%mmmmmmmmmmmmmm' 
`mmmmmmmmmmmmmm%;mmv;vmmm;mmmmmmm;%vvvvvv' 
    `%%%%%;mmmmmmmm;v%v;mmmmmm;%vvvnnvv' 
     vvvvvv%%%%;mmmm%;mmmmmm;%vvvnnnnvv 
     `vvnnnnvvv%%%;m;mmmmm;%vvnnmmnnvv' 
      vvnmmnnnnvvv%%mmmm;%vvnnmmmnnnvv 
      `vvnmmmnnvvv%mmm;%vvnnmmmmnnnvv' 
       `vvnmmmmvv%mmm;%vvnnmmmmnnnvv' 
        `vvnmmmvv%mm;%vvvnnmmmnnvvv' 
          `vvnmmvv%m;%vvvvnmnvvvv' 
           .;;vvvvvm;%vvvvvvvv')" << GREEN << R"(
         .;;;;;;;;;;;;;;;;;;;;, 
       ;;;;;;';;;;;;;;;;;'`;;;;;, 
      .;;;'    `;;;;;;;;'   `;;;;;. 
     .;;'        `;;;;;'      `;;;; 
     ;'           :`;;'         ;;' 
     ;            : ;'    ,    ,'             . 
      `           :'.:   .;;,.        .,;;;;;;' 
                  ::::   ;;,;;;,     ;;;,;;;;' 
                  ;;;;   `;;;,;;    .,';;;;' 
                  ;;;;      `';; ,;;' 
                ,;;;;;         .;',. 
                  `;;;;       .;'  ';,. 
                   `;;;.     .;'   ,;;,;;,. 
                    ;;;;    .;'    `;;;;,;;; 
                    ;;;;   .;'       `;;,;;' 
                    `;;;,;;'           `;' 
                     ;;;; 
                     ;;;;. 
                     `;;;;;,. 
                      ;;;;' 
                      ;;;; 
                      ;;;;
               )" ;
    
    return 0;
}


