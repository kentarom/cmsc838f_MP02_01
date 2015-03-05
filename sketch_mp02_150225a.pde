import processing.serial.*;

int x = 5;

Serial myPort;
void setup() {
size(400,400);
  int serialPortIndex = 5;
  myPort = new Serial(this, Serial.list()[serialPortIndex], 9600);
  
//  int x = 5;
  
}

void draw() {
background(0);


 
    }

void keyPressed() {
  
  /*
     123  abc
     456  def
     789  ghi
  
  */
  
  
  if (key == CODED) {
    
    background(0);
    
    if (x == 1) {
     if (keyCode == UP) {

    } else if (keyCode == DOWN){
     myPort.write('d');
     x = 4;
    } else if (keyCode == RIGHT){
     myPort.write('b');
     x = 2;
    } else if (keyCode == LEFT){
     myPort.write('d');
    
    }
   }
    
    else if (x == 2) {
     if (keyCode == UP) {

    } else if (keyCode == DOWN){
     myPort.write('e');
     x = 5;
    } else if (keyCode == RIGHT){
     myPort.write('c');
     x = 3;
    } else if (keyCode == LEFT){
     myPort.write('a');
     x = 1;
    }
   }
   
   
    else if (x == 3) {
     if (keyCode == UP) {

    } else if (keyCode == DOWN){
     myPort.write('f');
     x = 6;
    } else if (keyCode == RIGHT){

    } else if (keyCode == LEFT){
     myPort.write('b');
     x = 2;
    }
   }
   
    else if (x == 4) {
     if (keyCode == UP) {
    myPort.write('a');
    x = 1;
    } else if (keyCode == DOWN){
     myPort.write('g');
     x = 7;
    } else if (keyCode == RIGHT){
     myPort.write('e');
     x = 5;
    } else if (keyCode == LEFT){
    }
   }
    
    
    
   else if (x == 5) {
    if (keyCode == UP) {
    myPort.write('b');
    x = 2;
    } else if (keyCode == DOWN){
     myPort.write('h');
     x = 8;
    } else if (keyCode == RIGHT){
     myPort.write('f');
     x = 6;
    } else if (keyCode == LEFT){
     myPort.write('d');
     x = 4;
    }
   }
   
   
    else if (x == 6) {
    if (keyCode == UP) {
    myPort.write('c');
    x = 3;
    } else if (keyCode == DOWN){
     myPort.write('i');
     x = 9;
    } else if (keyCode == RIGHT){

    } else if (keyCode == LEFT){
     myPort.write('e');
     x = 5;
    }
   }
   
   
    else if (x == 7) {
     if (keyCode == UP) {
    myPort.write('d');
    x = 4;
    } else if (keyCode == DOWN){

    } else if (keyCode == RIGHT){
     myPort.write('h');
     x = 8;
    } else if (keyCode == LEFT){

    }
   }
   
   
    else if (x == 8) {
     if (keyCode == UP) {
    myPort.write('e');
    x = 5;
    } else if (keyCode == DOWN){

    } else if (keyCode == RIGHT){
     myPort.write('i');
     x = 9;
    } else if (keyCode == LEFT){
     myPort.write('g');
     x = 7;
    }
   }
   
   
    else if (x == 9) {
    if (keyCode == UP) {
    myPort.write('f');
    x = 6;
    } else if (keyCode == DOWN){

    } else if (keyCode == RIGHT){

    } else if (keyCode == LEFT){
     myPort.write('h');
     x = 8;
    }
   }
   
   
  
  }
  
  


}
    
