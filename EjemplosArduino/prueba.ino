
#include <ScreenAndroid.h>
ScreenAndroid sa;

int i=0;


void setup() {
      // put your setup code here, to run once:
     pinMode(13, OUTPUT); 
    
    }
void loop() {
      // put your main code here, to run repeatedly

     if(i>1000)i=0;  i=i+10;

     char rt = sa.ReadTouch();
     if(rt=='a'){digitalWrite(13, HIGH);}
     if(rt=='b'){digitalWrite(13, LOW);}
   
      
     sa.InitPaint(); //necesary
     sa.DrawCircle(200,100,50,5,"g",1);
     sa.DrawCircle(400,200,50,5,"y",0);
     sa.DrawLine(50,50,200,200,2,"m");
     sa.DrawRect(i,200,i+350,450,4,"b",0);
     sa.DrawText(100,i,"hello Android from Arduino",5,"v");


     sa.DrawButCirc(400,550,100,"ON",'a',"g");
     sa.DrawButCirc(700,550,100,"OFF",'b',"r");
     
     sa.RefreshPaint();//necesary to final
      
     delay (750);

     
}
