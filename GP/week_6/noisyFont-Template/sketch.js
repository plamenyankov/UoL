var points;
var font;
var tp;
var amt;
function preload() {
  font = loadFont('assets/Calistoga-Regular.ttf');
}

//////////////////////////////////////////////////////////////////////
function setup() {
  createCanvas(900, 400);
  background(0);

  points = font.textToPoints('c o d e', 50, 300, 300, {
    sampleFactor: .3,
    simplifyThreshold: 0
  });
}

//////////////////////////////////////////////////////////////////////
function draw() {
  background(0);
    fill(0, 255 - tp);
    rect(0,0,width,height);

    amt = map(mouseX, 0, width, 0, 80);
    tp = map(mouseY, 0, height, 30, 250);
    
    fill(color('#E72C04'));
    noStroke();
    for(var i=0; i < points.length; i++){
      var noiseValue = frameCount / 200 + points[i].x + points[i].y;
      var nY = map(noise(noiseValue + 10), 0,1, -amt, amt); 
      var nX = map(noise(noiseValue), 0,1, -amt, amt);
      
      ellipse(points[i].x + nX, points[i].y + nY, 5);
    }
}
