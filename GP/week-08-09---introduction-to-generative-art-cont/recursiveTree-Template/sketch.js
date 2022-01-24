// Code from a modified Daniel Shiffman example
// https://thecodingtrain.com/

var angle = 0;
var seed;
var time = 0;
function setup() {
  createCanvas(400, 400);
  seed = random(1000);
}
////////////////////////////////////////////////
function draw() {
  background(225);
  angleMode(DEGREES);
  randomSeed(seed);
  angle = random(35, 85);
  stroke(255);
  translate(200, height);
  branch(100, 3);
  // noLoop();
}
/////////////////////////////////////////////////
function branch(len, thickness) {
  stroke(165,42,42);
  strokeWeight(thickness);
  line(0, 0, 0, -len);
  translate(0, -len);
  n = noise(time);
  if (len > 4) {
    push();
    rotate(angle+n);
    branch(len * random(0.5, 0.8), thickness*random(0.5, 0.8));
    pop();
    push();
    rotate(-angle+n);
    branch(len * random(0.5, 0.8), thickness*random(0.5, 0.8));
    pop();
  }else{
    push();
    rotate(angle+n);
    ellipse(0,0,10);
    pop();
  }
  time+=0.0005;

}
