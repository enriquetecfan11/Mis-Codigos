//--------------------------------------------------
// Testeo-de-teclas-procesing   
// Enrique Rodriguez Vela  (enero-2018)
//--------------------------------------------------
String s = "Hola";
color fillVal = color(126);

void setup() { //<>//
  size(500, 500); // Tamaño de la pantalla
  noStroke(); //borde cuando pulsas
  fill(0); // para no rellenar con un color
}

 void keyPressed() {
    if (key == CODED) {
    if (keyCode == UP) {
      fillVal = 255;
    } else if (keyCode == DOWN) {
      fillVal = 0;
    } 
    else if (keyCode == LEFT) {
     fillVal = 126;
    }
        else if (keyCode == RIGHT) {
     fillVal = 128;
    }
     else if (keyCode == ENTER) {
     fillVal = 500;
    }
  } else {
    fillVal = 126;
  }
 }

void draw() {
  fill(fillVal);
  rect(25, 25, 250, 250);
  text(s , 420, 400);
}