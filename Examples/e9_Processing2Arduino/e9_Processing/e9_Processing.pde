/*
  Send to Arduino from Processing
  
  if mouse is clicked, send 1; otherwise, send 0.
  
*/

// import a library so that Processing can send serial
import processing.serial.*;
Serial myPort; 

void setup() {
  //make our canvas 200 x 200 pixels big
  size(200,200); 
  //change the 0 to a 1 or 2 etc. to match your port
  String portName = Serial.list()[0]; 
  myPort = new Serial(this, portName, 9600);
}

void draw() {
  if (mousePressed == true) {                           
    //if we clicked in the window send a 1
    myPort.write('1');         
    println("1");   
  } 
  else {  
    //otherwise send a 0    
    myPort.write('0');          
  }   
}


