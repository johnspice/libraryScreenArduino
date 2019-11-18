/*
  ScreenAndroid.h - Library for Arduino. 
  Created by JonhGab.
  Released into the public domain.
*/
 
#include "Arduino.h"
#include "ScreenAndroid.h"
#include <SoftwareSerial.h>
 
SoftwareSerial SSerialAndroid(8,9); 
ScreenAndroid::ScreenAndroid()
{
  //SSerialAndroid.begin(115200);
   SSerialAndroid.begin(9600);
}
 
void ScreenAndroid::DrawCircle(int cx,int cy,int r,int thick,String col,int fill)
{
 String jsoncircle="{\"type\":\"c\"," ;
  jsoncircle+="\"col\":\"";
  jsoncircle+=col;
  jsoncircle+="\",\"size\":";
  jsoncircle+=thick;
  jsoncircle+=",\"cx\":";
  jsoncircle+=cx;
  jsoncircle+=",\"cy\":";
  jsoncircle+=cy;
  jsoncircle+=",\"r\":";
  jsoncircle+=r;
  jsoncircle+=",\"fill\":";
  jsoncircle+=fill;
  jsoncircle+="}";

   SSerialAndroid.println(jsoncircle);
}
 
void  ScreenAndroid::DrawLine(int x1,int y1,int x2,int y2,int thick,String col)
{
  String jsonLine="{\"type\":\"l\"," ;
  jsonLine+="\"col\":\"";
  jsonLine+=col;
  jsonLine+="\",\"size\":";
  jsonLine+=thick;
  jsonLine+=",\"x1\":";
  jsonLine+=x1;
  jsonLine+=",\"y1\":";
  jsonLine+=y1;
  jsonLine+=",\"x2\":";
  jsonLine+=x2;
  jsonLine+=",\"y2\":";
  jsonLine+=y2;
  jsonLine+="}";
  SSerialAndroid.println(jsonLine);
}

void  ScreenAndroid::DrawRect(int x1,int y1,int x2,int y2,int thick,String col,int fill)
{
  String jsonRect="{\"type\":\"r\"," ;
  jsonRect+="\"col\":\"";
  jsonRect+=col;
  jsonRect+="\",\"size\":";
  jsonRect+=thick;
  jsonRect+=",\"x1\":";
  jsonRect+=x1;
  jsonRect+=",\"y1\":";
  jsonRect+=y1;
  jsonRect+=",\"x2\":";
  jsonRect+=x2;
  jsonRect+=",\"y2\":";
  jsonRect+=y2;
  jsonRect+=",\"fill\":";
  jsonRect+=fill;
  jsonRect+="}";
  SSerialAndroid.println(jsonRect);
}

void  ScreenAndroid::DrawText(int x,int y,String ms,int thick,String col)
{
  String jsonText="{\"type\":\"t\"," ;
  jsonText+="\"col\":\"";
  jsonText+=col;
  jsonText+="\",\"size\":";
  jsonText+=thick;
  jsonText+=",\"x\":";
  jsonText+=x;
  jsonText+=",\"y\":";
  jsonText+=y;
  jsonText+=",\"text\":\"";
  jsonText+=ms;
  jsonText+="\"}";
  SSerialAndroid.println(jsonText);
}

void  ScreenAndroid::DrawButRec(int x1,int y1,int x2,int y2,String text,char ret,String op)
{
  String json="{\"type\":\"br\"," ;
  json+="\"opt\":\"";
  json+=op;
  json+="\",\"text\":\"";
  json+=text;
  json+="\",\"x1\":";
  json+=x1;
  json+=",\"y1\":";
  json+=y1;
  json+=",\"x2\":";
  json+=x2;
  json+=",\"y2\":";
  json+=y2;
  json+=",\"return\":\"";
  json+=ret;
  json+="\"}";
  SSerialAndroid.println(json);
}


void  ScreenAndroid::DrawButCirc(int cx,int cy,int r,String text,char ret,String op)
{
  String json="{\"type\":\"bc\"," ;
  json+="\"op\":\"";
  json+=op;
  json+="\",\"text\":\"";
  json+=text;
  json+="\",\"cx\":";
  json+=cx;
  json+=",\"cy\":";
  json+=cy;
  json+=",\"r\":";
  json+=r;
  json+=",\"return\":\"";
  json+=ret;
  json+="\"}";
  SSerialAndroid.println(json);
}

char ScreenAndroid::ReadTouch()
{
  return SSerialAndroid.read();
}

void ScreenAndroid::InitPaint()
{
  SSerialAndroid.println("{\"type\":\"Init\"}");
}

void ScreenAndroid::RefreshPaint()
{
  SSerialAndroid.println("{\"type\":\"Finish\"}");
}




