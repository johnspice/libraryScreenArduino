# ScreenArduino App
Es una libreria para arduino que permite usar la pantalla de un Dispositivo android como pantalla para arduino usando bluetooth.
![GitHub Logo](/EjemplosArduino/promocional.png)
![GitHub Logo](/EjemplosArduino/ejemplo1.png)
![GitHub Logo](/EjemplosArduino/ejemplo2.png)
Existes muchas pantallas para Arduino desde las mas simples de dos segmentos hasta las mas sofisticadas  TFT que incluyen touch y pixeles a color. todo esto ya esta en tu mobil.

Esta libreria usar la pantalla de tu mobil como pantalla Arduino con la cual podrás dibujar elementos simples como rectángulos, lineas, círculos, texto incluso Botones que reacciona al Touch. 
Los datos se envian vía serial a través de los módulos hc-05/06. Podrás dibujar sin problemas elementos que no requiera refresh menores a 1000ms, aunque también es posible dibujar con refresh de hasta 100ms aumentando la velocidad en baudios en los hc05/06, y en la libreria. 

Todo lo necesario para conectar la aplicación a arduino se encuentra en el manual de este repo, incluyendo la instalacion de la libreria.
la aplicacion para android puede encontrarse en:
https://play.google.com/store/apps/details?id=com.p.screenarduino
en el siguiente video se puede apreciar su funcionamiento:
https://www.youtube.com/watch?v=iisodzIFLes&feature=youtu.be


Ventajas:
- pantalla inalambrica (bluetooth)
- solo usa 2 pines de arduino (tx=8,rx=9), dejando muchos pines libres.
- pantalla touch para usar botones.
- la siguiente versión dibujara imágenes pre-cargadas en el mobil, ademas funcionara por otg.

Desventajas:
- los refresh de pantalla deben ser mayores a  1000ms o aumentar los baudios en la libreria, en el manual se explica.
- entre mas elementos se dibujes el refresh debe ser mayor, lo cual provocara un lag en el click sobre los botones.

PRIVACIDAD 

La presente Política de Privacidad establece que ScreenArduino no usa, recoge o envia información de los usuarios fuera de la aplicación, al momento de utilizar la App.

Información que es recogida 

Nuestra App utiliza solo datos recibidos vía Bluetooth enviados por el mismo usuario, estos datos se guardan en un formato .xls que pueden ser consultados por el mismo usuario. 

Uso de la información recogida

Los dato recogidos son usados para ser dibujados en pantalla en tiempo real. 
