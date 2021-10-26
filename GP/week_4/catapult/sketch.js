// Example is based on examples from:
// http://brm.io/matter-js/
// https://github.com/shiffman/p5-matter
// https://github.com/b-g/p5-matter-examples

// module aliases
var Engine = Matter.Engine;
var Render = Matter.Render;
var World = Matter.World;
var Bodies = Matter.Bodies;
var Constraint = Matter.Constraint;

var engine;
var ground;

var ball1;
var ball2;

var catapult;
var catapultSpacer;
var constraint;
var titl;

function setup() {
  createCanvas(800, 600);
  engine = Engine.create(); // create an engine
  setupCatapult();
  setupBalls();
  setupGround();
}
/////////////////////////////////////////////////////////////
function draw() {
  background(0);
  Engine.update(engine);
  drawBalls();
  drawCatapult();
  drawGround();
}
/////////////////////////////////////////////////////////////
function setupCatapult(){
  catapult = Bodies.rectangle(width/2, height-70, width-200, 16);
  tilt = Bodies.rectangle(width/2, 580, 20, 70, {isStatic:true});
  catapultSpacer = Bodies.rectangle(120, height, 15, 110, {isStatic:true});
  constraint = Constraint.create({
    bodyA: catapult,
    pointA: { x: 0, y: 45 },
    bodyB:tilt,
    pointB:{x: 0,y: 0},
    stiffness: 0,
    length:0
  });
  World.add(engine.world,[catapult,constraint,tilt,catapultSpacer]);
}
/////////////////////////////////////////////////////////////
function drawCatapult(){
  fill(255);
  drawVertices(catapult.vertices);
  drawVertices(tilt.vertices);
  drawVertices(catapultSpacer.vertices);
}
/////////////////////////////////////////////////////////////
function setupBalls(){
  ball1 = Bodies.circle(130,500,20, {restitution: 0.8, friction:0.5});
  ball2 = Bodies.circle(680,0,60,{density:0.01});
  World.add(engine.world,[ball1, ball2]);
}
/////////////////////////////////////////////////////////////
function drawBalls(){
  drawVertices(ball1.vertices);
  drawVertices(ball2.vertices);
}
/////////////////////////////////////////////////////////////
function setupGround(){
  ground = Bodies.rectangle(400, height-10, 810, 25, {isStatic: true});
  World.add(engine.world, [ground]);
}
/////////////////////////////////////////////////////////////
function drawGround(){
  noStroke();
  fill(128);
  drawVertices(ground.vertices);
}
////////////////////////////////////////////////////////////////
// ******* HELPER FUNCTIONS *********
// DO NOT WRITE BELOW HERE
/////////////////////////////////////////////////////////////
function drawVertices(vertices) {
  beginShape();
  for (var i = 0; i < vertices.length; i++) {
    vertex(vertices[i].x, vertices[i].y);
  }
  endShape(CLOSE);
}
