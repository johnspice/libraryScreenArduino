#include <ScreenAndroid.h>
ScreenAndroid sa;

int i=0;


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
     i=i+5;
     if(i>100){i=0;}  

    /*
    here all the logic to get the temperature 
    of some sensor
    */
     drawThermometer(i);  //set temperatura between 0C-100C
     delay (1000);
}




void drawThermometer(float t){
     String temp;
     temp=t;
     temp +="C";
     sa.InitPaint(); //necesary init
    
     sa.DrawText(300,60,"thermometer drawn from Arduino",5,"m");
     sa.DrawRect(50,50,80,550,2,"w",0);
     
     if(t<=75){sa.DrawRect(50,550-t*5,80,550,4,"g",1);sa.DrawLine(50,550-5*t,100,550-5*t,2,"w"); sa.DrawText(110,550-5*t,temp,2,"g");}
     if(t>75 && t<=95){sa.DrawRect(50,550-t*5,80,550,4,"y",1);sa.DrawLine(50,550-5*t,100,550-5*t,2,"w"); sa.DrawText(110,550-5*t,temp,2,"y");}
     if( t>95){sa.DrawRect(50,550-t*5,80,550,4,"r",1);sa.DrawLine(50,550-5*t,100,550-5*t,2,"w"); sa.DrawText(110,550-5*t,temp,2,"r");}
     
     sa.DrawCircle(65,580,33,5,"g",1);
     sa.DrawLine(50,50,100,50,2,"w"); sa.DrawText(110,50,"100C",2,"w");
     sa.DrawLine(50,550,100,550,2,"w"); sa.DrawText(110,550,"0C",2,"w");
     sa.DrawLine(50,300,100,300,2,"w"); sa.DrawText(110,300,"50C",2,"w");
     sa.DrawLine(50,300,100,300,2,"w"); sa.DrawText(110,300,"50C",2,"w");
     
     sa.RefreshPaint();//necesary to final
  } 





  
