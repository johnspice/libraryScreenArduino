#include <ScreenAndroid.h>
ScreenAndroid sa;

bool op=false;

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
   if(op){
      drawControl(1,0,1,0,1);
    op=false;
    }
    else{
       drawControl(0,1,0,1,0);
    op=true;
    }
  
  
 
  delay (1000);
}



  void drawControl(int d1,int d2,int d3,int d4,int d5){
  sa.InitPaint(); //necesary init
  sa.DrawText(650,100,"Door Control",5,"w");

  sa.DrawRect(20,20,540,360,2,"w",0);
  sa.DrawRect(20,360,810,720,2,"w",0);
  sa.DrawLine(200,20,200,360,2,"w");
  sa.DrawLine(20,200,200,200,2,"w");
  sa.DrawLine(470,360,470,810,2,"w");
  
  //door1
  sa.DrawText(60,50,"Door 1",2,"y");
  if(d1==0){sa.DrawLine(50,20,100,20,10,"g");}
  else{sa.DrawLine(50,20,100,20,10,"r");}
   
   //door2
   sa.DrawText(210,70,"Door 2",2,"y");
   if(d2==0){sa.DrawLine(200,50,200,100,10,"g");}
   else{ sa.DrawLine(200,50,200,100,10,"r");  }
   
   //door3
   sa.DrawText(470,335,"Door 3",2,"y");
   if(d3==0){sa.DrawLine(470,360,540,360,10,"g");}
   else{sa.DrawLine(470,360,540,360,10,"r");}
    
   //door4
   sa.DrawText(110,390,"Door 4",2,"y");
   if(d4==0){sa.DrawLine(110,360,170,360,10,"g");}
   else{sa.DrawLine(110,360,170,360,10,"r");}
   
   //door5 close
   sa.DrawText(480,550,"Door 5",2,"y");
   if(d5==0){sa.DrawLine(470,510,470,590,10,"g");}
   else{sa.DrawLine(470,510,470,590,10,"r");}
  
  sa.RefreshPaint();//necesary to final
  }




  
