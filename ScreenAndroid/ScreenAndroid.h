/*
  ScreenAndroid.h - Library for Arduino. 
  Created by JonhGab.
  Released into the public domain.
*/
#ifndef ScreenAndroid_h
#define ScreenAndroid_h
 
#include "Arduino.h"
#include <SoftwareSerial.h>

 
class ScreenAndroid
{
  public:
  ScreenAndroid();
  void DrawCircle(int cx,int cy,int r,int thick,String col,int fill);
	void DrawLine(int x1,int y1,int x2,int y2,int thick,String col);
	void DrawRect(int x1,int y1,int x2,int y2,int thick,String col,int fill);
	void DrawText(int x,int y,String ms,int thick,String col);
	void DrawButRec(int x1,int y1,int x2,int y2,String text,char ret,String op);
	void DrawButCirc(int cx,int cy,int r,String text,char ret,String op);
  char ReadTouch();
  void InitPaint();
  void RefreshPaint();
  private:
 
};
 
#endif
