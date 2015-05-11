//============================================================================
// Name        : TP2.c
// Author      : Lyapunov Pylyp
// Version     : 10/05/2015
//============================================================================

#include <stdio.h>


int main(void) {
      int c;



      while((c=getchar())!= EOF){
            if(c=='\t'){
              putchar('\\');
              putchar('t');	
             }
             else{
			 if(c=='\b'){
			 putchar('\\');
             putchar('b');
			      }
                  else{
				  if (c=='\\'){
				  putchar('\\');
                  putchar('\\');

                        }
                        else{
						putchar(c);}
                }
                }
                }



}

