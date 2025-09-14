#include <reg51.h>

// Motor control pins
sbit in1 = P2^0; // +ve
sbit in2 = P2^1; // -ve

// Switches
sbit sw1 = P1^0; // start
sbit sw2 = P1^1; // stop
sbit sw3 = P1^2; // forward
sbit sw4 = P1^3; // forward brake
sbit sw5 = P1^4; // reverse
sbit sw6 = P1^5; // reverse brake

void main(void) {
    sw1 = sw2 = sw3 = sw4 = sw5 = sw6 = 1;
    in1 = in2 = 0;

    while(1) {
        if(sw1==0 && sw2==1 && sw3==1 && sw4==1 && sw5==1 && sw6==1) {
            in1 = 1;
            in2 = 0;
        }
        if(sw2==0 && sw1==1 && sw3==1 && sw4==1 && sw5==1 && sw6==1) {
            in1 = 0;
            in2 = 0;
        }
        if(sw3==0 && sw1==1 && sw2==1 && sw4==1 && sw5==1 && sw6==1) {
            in1 = 1;
            in2 = 0;
        }
        if(sw4==0 && sw1==1 && sw2==1 && sw3==1 && sw5==1 && sw6==1) {
            in1 = 0;
            in2 = 0;
        }
        if(sw5==0 && sw1==1 && sw2==1 && sw3==1 && sw4==1 && sw6==1) {
            in1 = 0;
            in2 = 1;
        }
        if(sw6==0 && sw1==1 && sw2==1 && sw3==1 && sw4==1 && sw5==1) {
            in1 = 0;
            in2 = 0;
        }
    }
}
