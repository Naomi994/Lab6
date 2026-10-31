#include <avr/io.h> 

int main(){
  DDRD = 0b00000000;  
  PORTD = 0b00001100;  
  DDRB = 0b00000011;  

  while(1){
    if((PIND & 0b00000100) == 0){
      PORTB = PORTB | 0b00000001;
    }else{
      PORTB = PORTB & 0b11111110;
  }
    if((PIND & 0b00001000) == 0){
      PORTB = PORTB | 0b00000010; 
    }else{ 
      PORTB = PORTB & 0b11111101; 
}
  }
}
